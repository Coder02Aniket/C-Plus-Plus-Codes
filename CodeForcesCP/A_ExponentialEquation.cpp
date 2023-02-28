#include<bits/stdc++.h>


using namespace std;

void solve(int n);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int tc , n;
    cin >> tc ;
    while(tc--){
        cin >> n;
        solve(n);
    }
    return 0;
}
void solve(int n ){
    if(n & 1 ){
        cout << -1 << endl ;
    }else{
        cout << 1 << " " << n /2 << endl;
    }
}