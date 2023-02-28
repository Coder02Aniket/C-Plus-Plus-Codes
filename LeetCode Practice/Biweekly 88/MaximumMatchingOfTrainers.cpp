#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>



using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin() , players.end()) ;
        sort(trainers.begin() , trainers.end() ) ;
        int i = 0 , j = 0 , count = 0 ;
        while(i < players.size() && j < trainers.size() ){
            if(players[i] <= trainers[j]){ 
               count++;
                 
                i++,j++;
            }
            else{
                while(j < trainers.size()){
                    if(players[i] <= trainers[j]){
                        break ;
                    }
                    j++;
                }

            }

        }
        return count ;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution* ob = new Solution() ;
    vector<int> players = {4,7,9} , trainers = {8,2,5,8} ;
    cout << ob->matchPlayersAndTrainers(players , trainers) ;
    
    return 0;
}