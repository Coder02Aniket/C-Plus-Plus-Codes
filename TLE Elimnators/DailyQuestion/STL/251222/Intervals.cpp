#include<bits/stdc++.h>


using namespace std;


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("errors.txt","w",stderr);
    // #endif
    ios::sync_with_stdio(0);
    cin.tie(0);


    long long  e1s , e1e , e2s , e2e ;
    cin >> e1s >> e1e >> e2s >> e2e ;
    if(e1s <= e2e && e2s <= e1e){
        cout << max(e2s,e1s) << " " << min(e1e,e2e) << endl ;
    }
    else{
        cout << - 1 << endl ;
    }




    return 0;
}