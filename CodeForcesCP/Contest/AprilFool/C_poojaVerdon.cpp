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
    int n , temp , sum  = 0 ;
    cin >> n;
    while(n--){
        cin >> temp ;
        sum += temp ;
    }
    cout << sum << endl ;




    return 0;
}