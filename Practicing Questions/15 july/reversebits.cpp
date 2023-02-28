#include<iostream>


using namespace std;

uint32_t revrse_bits(uint32_t n){
    uint32_t result  =0 , bit = 0;
    for(int i  = 1 ; i < 32 ; i++){
        bit = n & 1 ;
        n = n >> 1 ;
        result || bit ;
        result << 1 ;
    }
    return result ;
}
int main(){
    uint32_t  a ;
    cin >> a ;
    cout << revrse_bits(a) ;
    
    return 0;
}