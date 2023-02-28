// https://codeforces.com/contest/1728/problem/A
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// bool cmp(int a , int b){
//     if(a > b){
//         return true  ;
//     }
//     return false ;
// }
int RemainingColorNumber(vector<int>&ballArray,int n){
    int maxIndex = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(ballArray[i]>=ballArray[maxIndex]){
            // cout << i <<"aniket"<< endl ;
            maxIndex= i ;
        }
    }
    // cout << maxIndex ;
    return maxIndex + 1 ;
}
int main(){
    ios::sync_with_stdio(false) ;
    cin.tie(0) ;
    int t , n ;
    vector<int>colors(20,0) ;
    cin >> t;
    while(t--){
        cin >> n ;
        for(int i = 0 ; i < n ; i++){
            cin >> colors[i] ;
        }
        cout << RemainingColorNumber(colors,n) <<endl ;
        colors.clear() ;
    }
    
    return 0;
}