#include<iostream>
#include<vector> 

using namespace std;


int main(){
    vector<int> v ;
    // vector<int> a(5,1); 5 for no of elements and 1 for intializatiion value
    cout << "size right now is " << v.capacity() <<endl;
    v.push_back(1) ;
    cout << "size right now is " << v.capacity() <<endl;
    v.push_back(2);
    cout << "size right now is " << v.capacity() <<endl;
    v.push_back(3) ;
    cout << "size right now is " << v.capacity() <<endl;
    cout<<"size - > " << v.size() ;

    // pop back removes element from last 
    cout << "before pop " << endl;
    for (int i  : v){
        cout<< i <<" " ;
    }
    cout << "after pop " << endl;
    v.pop_back() ;
    for (int i  : v){
        cout<< i <<" " ;
    }
    cout << "\nsize right now is " << v.size() <<endl;
    v.clear() ;
    cout << "size right now is " << v.size() <<endl;
    // copy vector
    vector <int > C(90 ,90) ;
    for(int i : C){
        cout << i <<" " ;
    }
    cout << "***************" << endl ;
    vector<int> COpied(C) ;
    for(int i : COpied){
        cout << i << " " ;
    }

    return 0;
}