#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t ;
    cin >> t ;
    while(t--){
        int a  , b , c , d= 0;
        cin >> a >> b >> c ;
        d = max(max(a,b),c) ;
        if(d == b + c){
            cout << "yes" << endl ;
        }
        else if(d == a + c){
            cout << "yes" << endl ;
        }
        else if(d == a + b){
            cout << "yes" << endl ;
        }
        else{
            cout << "no" << endl ;
        }

    }




    return 0;
}