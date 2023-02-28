#include<iostream>

#include <list> 
using namespace std;


int main(){
    list<int> l ;
    list<int> n(5,100) ;
    cout <<"Printing N " << endl ;
    for(int i : n){
        cout << i <<" " ;
    }
    cout << endl ;
    l.assign(n.begin(),n.end()) ;
    l.push_back (1) ;
    l.push_front(2 ) ;
    for(int i : l){
        cout << i << " " ;

    }
    cout << endl ;
    l.erase(l.begin()) ;
    cout << "After Erase : " << endl; 
    for(int i : l){
        cout << i << " " ;
    }
    cout << " size of list :" << l.size() ;
    return 0;
}