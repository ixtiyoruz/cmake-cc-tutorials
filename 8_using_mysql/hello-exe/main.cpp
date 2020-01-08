#include <functional>
#include <iostream>
#include <mysql_connection.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;
/*
mysql> describe yuzlar
    -> ;
+----------+----------------------+------+-----+---------+-------+
| Field    | Type                 | Null | Key | Default | Extra |
+----------+----------------------+------+-----+---------+-------+
| ID       | smallint(5) unsigned | YES  |     | NULL    |       |
| Name     | varchar(40)          | YES  |     | NULL    |       |
| Photo    | blob                 | YES  |     | NULL    |       |
| Quantity | int(10) unsigned     | YES  |     | NULL    |       |
+----------+----------------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

*/


int main(int argc, char* argv[]) {
    cout << endl;
    cout << "Running 'SELECT 'Hello World!' AS _message'..." << endl;

    try {
        sql::Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;

        /* Create a connection */
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "1");
        /* Connect to the MySQL test database */
        con->setSchema("faces");

        stmt = con->createStatement();
        res = stmt->executeQuery("select ID, Name, Photo, Quantity from yuzlar");
        while (res->next()) {
            cout << "\t... MySQL replies: ";
            /* Access column data by alias or column name */
            cout << res->getString("_message") << endl;
            cout << "\t... MySQL says it again: ";
            /* Access column data by numeric offset, 1 is the first column */
            cout << res->getString(1) << endl;
        }
        delete res;
        delete stmt;
        delete con;

    } catch (sql::SQLException &e) {
        cout << "# ERR: SQLException in " << __FILE__;
        cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
        cout << "# ERR: " << e.what();
        cout << " (MySQL error code: " << e.getErrorCode();
        cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    }

    cout << endl;

    return 0;
}

// vim:ft=cpp sw=4 ts=4 tw=80 et