#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{  
    int count = 0 ; 
    bool non_decreasing = false ;
    int n ;
    cin >> n ;
    vector<int>arr(n,0);
    cin >> arr[0] ;
    for(int i = 1 ;i < n ; i++){
        cin >> arr[i] ;
        if(arr[i-1]>arr[i]){
            non_decreasing = true;  
            count ++;
        }
    }
    if(count%2==0){
        count /= 2 ;
    }
    cout << count << endl ;




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
