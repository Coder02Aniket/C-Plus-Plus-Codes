#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , num , start_num , next_num;
    cin >> t ;
    
    while(t--){
        cin >> num ;
        if(num%2==1){
            start_num = num/2 + 1 ;
            next_num = num ;
            for(int i = 1; i <= num/2  ; i++){
                cout << start_num-- <<" " << next_num-- << " ";
            }
            cout << 1 ;
        }
        else{
            start_num = num/2 ;
            next_num = num ;
            for(int i  = 1 ; i <= num/2 ; i++){
                cout << start_num-- << " " << next_num-- << " " ;
            }
        }
        cout << endl; 
    }
    return 0;
}