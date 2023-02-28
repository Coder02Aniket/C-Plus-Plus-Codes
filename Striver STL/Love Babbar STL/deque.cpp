#include<iostream>

#include<deque>
using namespace std;


int main(){
    deque<int> d ;
    d.push_back(1) ;
    d.push_front(2) ;
    for(int i : d){
        cout << i << " "; 
    }
    d.erase(d.begin(),d.begin()+1) ; // (Starting Index , Ending Index) ;
    cout << "\nAfter Erase Operation :" << endl;
    for(int i : d){
        cout << i << " "; 
    }
    cout<<"\n size is :" << d.size() ; // No of elements
    return 0;
}