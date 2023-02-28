#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t , r , c ;
    cin >> t ;
    while(t--){
        cin >> r >> c  ;
        for(int i = 1 ; i <= r ; i++){
            for(int j = 1 ; j <= c ; j++){
               if((i-2)*(j-1) < 0 && (i-1)*(j-2) < 0 && (i+1)*(j+2)>(r*c) && (i+2)*(j+1)>(r*c)){
                    cout << i << j << endl ;
                    break;
                }
            }
        }
    }
    
    return 0;
}