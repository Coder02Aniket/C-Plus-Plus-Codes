// Consistency is key 
// Thanks to karan mashru for hint 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t ,count ;
    char ans ;
    vector<vector<char>>Grid(8,vector<char>(8));

    cin >> t; 
    while(t--){
        ans = '-';
        for(int i = 0 ; i  < 8 ; i++){
            for(int j = 0 ; j < 8  ; j++){
                cin >> Grid[i][j] ; 
            }
            count = 0 ; 
            for(int j = 0 ; j < 8 ;j++){
                if(Grid[i][j]=='R'){
                    count++;
                }
            }
            if(count == 8 ){
                ans = 'R' ;
            }
        }
        if(ans != 'R'){
            
            cout << 'B' << endl ;
        }
        else{
            cout << ans  << endl ;
        }
        
    }
    return 0;
}