#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

bool isPowerOfTwo(int x){
    if(x <= 0 ){
        return false ;
    }
    else if( x > 0 && !(x & x - 1)){
        return true ;
    }
    return false ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t , a;
    cin >> t; 
    while(t--){
        cin >> a ;
        (isPowerOfTwo(a))? cout << "YES"<< endl  : cout << "NO" << endl ;
    }
    
    return 0;
}