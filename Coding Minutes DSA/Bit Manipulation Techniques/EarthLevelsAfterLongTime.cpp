#include<bits/stdc++.h>
using namespace std;

int earthLevel(int k)
{
    //your code goes here
    int count = 0 ;
    for(int i = 31 ; i >= 0 ; i--){
        int n = 1 << i ;
        // cout << n << endl ;
        if(k & n){
            count++;
        }
    }
    // bitset<32>b = k ;
    // count = b.count() ;
    return count ;
    
}
main(){
   cout <<  earthLevel(14) << endl ;
}