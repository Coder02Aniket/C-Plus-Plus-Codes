#include<bits/stdc++.h>



using namespace std;

int FastExpo(int a , int n ){
    int ans = 1 ;
    while(n > 0){
        int last_bit = n & 1 ;
        if(last_bit){
            ans = ans * a ;
        }
        n = n >> 1 ;
        a *= a ;

    }
    return ans ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m = (1e9+7) ;
    cout << (FastExpo(17,16)%6)%m<< endl ;
    
    return 0;
}