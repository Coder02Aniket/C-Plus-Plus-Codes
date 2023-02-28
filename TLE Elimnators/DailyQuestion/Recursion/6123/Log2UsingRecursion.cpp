#include<bits/stdc++.h>

#define int long long
using namespace std;

int Log2( int n ){
    if(n < 2){
        return 0 ;
    }
    return 1 + log2(n/2);

}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    
    int tc ;
    cin >> tc ;
    cout << Log2(tc) << endl;





    return 0;
}