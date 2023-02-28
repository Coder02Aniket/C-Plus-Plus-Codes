#include<iostream>


using namespace std;


int main(){
    int t , a , b , ans = 0;
    cin >> t ;
    
    while(t--){
        cin >> a >> b ;
        ans = ans + (a * b) ;
    }
    cout << ans ;
    
    return 0;
}