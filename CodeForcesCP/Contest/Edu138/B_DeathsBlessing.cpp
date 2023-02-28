#include<bits/stdc++.h>


#define ll long long 
using namespace std;

static bool cmp(pair<ll,ll>T,pair<ll,ll>R){
    if(T.second == R.second ){
        return T.first < R.first ;
    }
    return T.second < R.second ;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll tc , n , seconds , ptr ;
    cin >> tc ;
    while(tc--){
        cin >> n;
        seconds = 0 ;
        vector<pair<ll,ll>>vecpair(n,pair<ll,ll>(0,0)) ;
        for(ll i = 0 ; i < 2*n ; i++){
            if(i < n){
                cin >> vecpair[i].first ;
            }
            else{
                // cout << i - n << endl ;
                cin >> vecpair[i-(n)].second ;
            }
        }
        sort(vecpair.begin(),vecpair.end(),cmp);//Normal sort sorts according to first element of pair 
        ptr = 0 ;
        while(ptr < n-1 ){
            seconds += vecpair[ptr].first ;
            vecpair[ptr+1].first += vecpair[ptr].second  ;
            ptr++;

        }
        seconds += vecpair[ptr].first ;
        cout << seconds << endl ;



    }
    return 0;
}