#include<bits/stdc++.h>



using namespace std;

// int fact(int a){
//     if( a == 0 || a ==  1){
//         return 1 ;
//     }
//     return (a * fact(a- 1)) ;
// }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , n , temp ;

    cin >> t;
    while(t--){
        cin >> n ;
        for(int i = 0  ; i < n ; i++){
            cin >> temp ;
        }
        cout << 3 * (10-n) * (9-n) << endl ;
    }
    return 0;
}