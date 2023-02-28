#include<bits/stdc++.h>


using namespace std;


int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stderr);

    //#endif
    int n ;
    cin >> n ;
    vector<int>ratings{1200,1400,1600,1900,2100,2300,2400,2600,3000};
    
    cout << *(upper_bound(ratings.begin(),ratings.end(), n));




    return 0;
}