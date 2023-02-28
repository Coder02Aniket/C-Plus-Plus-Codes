#include<iostream>

#include<array>
using namespace std;


int main(){
    // wrong way of defining

// Arrays->int arr[100];

    array<int,5>arr={1,2,3,5,6};//->{1,0,0,0
    for (auto it = arr.end() -1 ; it >= arr.begin() ; it--){
        cout << *it << " " ;
    }
    cout << endl ;
    //  rbegin and rend()
     for (auto it = arr.rbegin(); it < arr.rend(); it++){
        cout << *it << " " ;
    }
    
    return 0;
}