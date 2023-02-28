#include<bits/stdc++.h>


using namespace std;

int fibbonaci(int n){
    if(n == 0){
        return 0 ;
    }else if( n== 1){
        return 1 ;

    }
    return fibbonaci(n-1) + fibbonaci(n-2);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n ;
    cin >> n;
    fibbonaci(n);




    return 0;
}