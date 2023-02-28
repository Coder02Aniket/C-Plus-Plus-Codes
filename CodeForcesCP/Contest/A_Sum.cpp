#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , a , b ,c ;
    cin >> t;
    while(t--){
        cin >>  a >> b >> c ;
        if(a+b == c){
            cout << "YES" << endl;
        }else if( a + c == b){
            cout << "YES" << endl ;
        }else if(b + c == a ){
            cout << "YES" << endl ;
        }else{
            cout <<"NO" << endl;
        }
    }
    return 0;
}