#include<bits/stdc++.h>


using namespace std;
#define int long long 

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stderr);

    //#endif
    int n , k , mid , opns , ans ;
    cin >> n  >> k ;
    vector<int>arr(n,0);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    function<bool(int)>check = [&](int mid){
        opns =0 ;
        for(int i = n/2 ; i < n ; i++){
            opns += max(0LL,mid-arr[i]);
        }
        return opns <= k ;
    };
    function<int(int,int)> bi_se = [&](int lo , int hi){
        while(lo < hi){
            mid = lo + (hi - lo)/2 ;
            if(check(mid)){
                ans = mid ;
                lo = mid + 1;
            }else{
                hi = mid -1;
            }
        }
        return ans ;

    };

    cout << bi_se(1,INT32_MAX)  << endl ;


    return 0;
}