#include<bits/stdc++.h>
 
#define int long long
#define M 1000000007
using namespace std;
map<int,int>DP ;
int gen(int n){
    if(n==1){
        return DP[n] = 1;
    }else if(n==0){
        return DP[n] = 1;
    }else if(n<0){
        return  0;
    }
    if(DP[n]== 0)
        return DP[n] = (gen(n-1)%M+gen(n-2)%M+gen(n-3)%M+gen(n-4)%M+gen(n-5)%M+gen(n-6)%M)%M;
    else{
        return DP[n]%M ;
    }
}
 
main()
{
    int n;
    cin>>n;
    //int a=n,b=n,c=n,d=n,e=n;
    int ans=gen(n);
    cout<<ans%M<<endl;
    return 0;
}