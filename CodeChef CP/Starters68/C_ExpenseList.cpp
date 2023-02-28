#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , x , n ;
    cin >> t ;
    while(t--){
        cin >> n >> x ;
        cout << pow(2,(x-n)) << endl ;

    }
    return 0;
}