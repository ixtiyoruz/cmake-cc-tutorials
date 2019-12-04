#include <iostream>
#include <thread> 
#include <vector> 
#include <cstdlib>
#include <mutex>

using namespace std;
// it saves you from the error which occurs when two threads try to acces same information
std::mutex veclock;

void count(int n1, int n2, vector<int> &v){
    for(int i=n1; i < n2; i++){
        //cout<< i << endl;
        veclock.lock();
        v.push_back(i);
        veclock.unlock();
    }
}

 
int main(){
    
    vector<int> v1;
    std::thread t1(count, 0, 1000, std::ref(v1));
      
    std::thread t2(count, 1000, 2000, std::ref(v1));
    t1.join();
    t2.join();  
    
    cout << "size of vector is : "<<v1.size() << endl;
    for (int i=0; i<v1.size(); i++) 
        cout << v1[i] << endl;
}
