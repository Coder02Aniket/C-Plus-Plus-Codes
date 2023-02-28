#include<bits/stdc++.h>


using namespace std;


int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int t ;
    cin >> t ;
    while(t--){
        vector<int>a(4);
        for(int i = 0 ; i < 4 ; i++){
            cin >> a[i];
        }
        int max_pos= max_element(a.begin(),a.end()) - a.begin() ;
        int min_pos = min_element(a.begin(),a.end()) - a.begin() ;
        if(max_pos + min_pos == 3){
            cout << "YES" << endl ;
        }
        else {
            cout << "NO" << endl;
        }

        
    }





    return 0;
}