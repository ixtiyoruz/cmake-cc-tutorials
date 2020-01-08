this is an example usage of mysql in c++



first of all if the mysql service is not running run it by:

sudo systemctl start mysql

if you want mysql should start after reboot do it :

sudo systemctl enable mysql

and then enter mysql environment in terminal:

/usr/bin/mysql -u root -p

and type your password to enter.

ref:
1. https://support.rackspace.com/how-to/install-mysql-server-on-the-ubuntu-operating-system/


to install dependencies run:

sudo apt-get -y install mysql-server

#root,xxxxxx
mysql -uroot -pxxxxxx

sudo apt-get -y install libboost-all-dev

sudo apt-cache search libmysqlcppconn

    #libmysqlcppconn-dev - MySQL Connector for C++ (development files)
    #libmysqlcppconn7v5 - MySQL Connector for C++ (library)

sudo apt-get -y install libmysqlcppconn-dev
sudo apt-get install libmysqlcppconn7v5
