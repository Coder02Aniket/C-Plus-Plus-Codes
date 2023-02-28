#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>



using namespace std;

void setIthBit(int& n , int  i ){
    int mask = (1 << i ) ;
    n = n | mask ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , n , i ;
    cin >> t ;
    while(t--){
        cin >> n >> i ;
        setIthBit(n, i) ;
        cout << n << endl ;
        
    }
    
    return 0;
}