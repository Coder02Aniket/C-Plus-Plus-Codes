#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n , k , temp , flag = 0;
    cin >> n >> k ;
    for(int i = 0 ;i < n ;i++){
        cin >> temp ;
        if(temp == 1){
            flag = 1 ;
        }
    }
    if(flag){
        cout  << "YES" << endl ;
    }
    else{
        cout << "NO" << endl ;
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
