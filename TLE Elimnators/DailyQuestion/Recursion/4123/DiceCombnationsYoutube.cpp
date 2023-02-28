#include<bits/stdc++.h>

#define M 1000000007
#define int long long 
using namespace std;

int no_of_ways(int n,vector<int>&dp,int base_case=1){

    if(base_case == 1){
        return 1 ;
    }
    else if( base_case == n){
        return n ;
    }
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        // freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    
    int n ;
    cin>> n ;
    vector<int>dp(n+1,0);
    dp[1]= 1;

    cout << no_of_ways(n,dp);



    return 0;
}