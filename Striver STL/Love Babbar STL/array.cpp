#include<iostream>
#include<array>

using namespace std;


int main(){
    array<int,6> arrSTL = {4,6,43,2,5,87} ;
    cout << "size is :" << arrSTL.size() ;
    cout<<"\nelement at position 5 is "<<arrSTL.at(5) << endl;
    
    
    return 0;
}