#include<bits/stdc++.h>


using namespace std;
#define int long long 
void PrintAlgo(int n){
    if(n == 1 ){
        return ; 
    }else if(n & 1){
        n = 3 * n  + 1 ;
        cout << n << " ";
    }else{
        n /= 2 ;
        cout << n << " ";
    }
    PrintAlgo(n);
}
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n  = 3;
    cin >> n; 
    cout << n << " ";
    PrintAlgo(n);
    cout << endl; 




    return 0;
}