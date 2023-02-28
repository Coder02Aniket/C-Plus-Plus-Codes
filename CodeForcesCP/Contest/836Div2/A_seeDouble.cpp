#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t ;
    cin >> t ;
    string s , q;
    while(t--){
        cin>> s ;
        q = s;
        reverse(s.begin(),s.end()) ;
        q.append(s);
        cout << q  << endl ; 
    }
    return 0;
}