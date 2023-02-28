#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

bool ThreePower(int n){
    if(n>1)
        while(n%3==0) n /= 3;
    return n==1;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t , a;
    cin >> t; 
    while(t--){
        cin >> a ;
        (ThreePower(a))? cout << "YES"<< endl  : cout << "NO" << endl ;
    }
    
    return 0;
}