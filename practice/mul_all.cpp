#include<iostream>


using namespace std;

int mul_of_all_digits(int a){
    int ans = 1 ;
    int divi = 0 ;
    while(a != 0){
        ans = ans * (a % 10) ;
        a = a / 10 ;
        
    }
    return  ans ;
}
int main(){
    int input_number ;
    cin >> input_number ;
    cout << mul_of_all_digits(input_number) ;
    
    
    return 0;
}