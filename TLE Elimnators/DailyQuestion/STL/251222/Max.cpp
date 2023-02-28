#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n , ans= 0 , num = 0 ;
    cin >> n ;
    for(int i = 0 ; i < n ;i++){
        cin >> num ;
        ans = max(ans,num);
    }
    cout << ans << endl ;
    



    return 0;
}