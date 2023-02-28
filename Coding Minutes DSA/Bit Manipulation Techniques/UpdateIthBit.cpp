#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>



using namespace std;
void ClearIthBit(int n , int i ){
    int mask = ~(1 << i) ;
    n = n & mask ;
    
}
void updateIthBit(int n , int i , int v){
    ClearIthBit(n,i) ;
    int mask = (v << i) ;
    n = n | mask ;
    cout << n << endl ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , n , i , v;
    cin >> t;
    while(t--){
        cin >> n >> i >> v ;

        updateIthBit(n,i,v) ;
        
    }
    
    return 0;
}