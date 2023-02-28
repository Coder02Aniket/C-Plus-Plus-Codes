// https://codeforces.com/contest/1729/problem/B
// Thanks to karan Mashru
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long 

using namespace std;

string DecodeString(string  num){
    ll i = 0 ;
    ll m ;
    string result = "" ;

    for(int i = num.length() - 1 ; i >= 0 ; i--){
        if(num[i]=='0'){
            m = stoi(num.substr(i-2,2)) + 96 ;
            result.push_back(char(m)) ;
            i -= 2 ;
        }
        else{
            m = num[i] + 48 ;
            result.push_back(m) ;
        }
    }
    reverse(result.begin() , result.end()) ;

    return result ;


}
int main(){
    int t , n ;
    string a;
    cin >> t;
    while(t--){
        cin >> n >> a;
        cout << DecodeString(a) << endl ;
    }
    
    return 0;
}