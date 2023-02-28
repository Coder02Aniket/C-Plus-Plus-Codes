#include<iostream>


using namespace std;

void CheckOddEven(int num){
    (num & 1)? cout << "odd\n" : cout << "even\n" ;
}
int main(){
    int t , num ; 
    cin >> t ;
    while(t--){
        cin >> num ;
        CheckOddEven(num) ;

    }
    
    return 0;
}