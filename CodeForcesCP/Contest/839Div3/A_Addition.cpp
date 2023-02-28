#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t ; 
    cin >> t ;
    while(t--){
        string c ;
        cin >> c ;
        int ans = 0 ;
        for(int i = 0 ; i < 3 ; i++){
            if(i==1){
                continue; 
            }
 
            ans += (toascii(c[i])-48) ;
        }
        cout << ans << endl ;
    }




    return 0;
}