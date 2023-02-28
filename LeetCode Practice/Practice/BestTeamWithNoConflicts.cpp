#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    static bool cmp(pair<int,int>& p1 , pair<int,int>& p2){
        if(p1.second < p2.second){
            return true ;
        }
        if(p1.second == p2.second){
            return p1.first < p2.first ;
        }
        return false ;
        

    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>catlog(scores.size(),{0,0});
        for(int i = 0 ; i < scores.size() ;i++){
            catlog[i] = {scores[i],ages[i]};
        }
        sort(catlog.begin() ,catlog.end(), cmp);
        long long ans  = 0  ;
        vector<long long > dp(catlog.size(),0);

        // Tweaked LIS 
        
        
        for(int i = 0 ; i < catlog.size() ;i++){
            dp[i] = catlog[i].first ;
            for(int j = 0 ; j < i ; j++){
                if(catlog[j].first < catlog[i].first){
                      dp[j] = max(dp[j],dp[i]+catlog[j].first);  
                }

            }
            ans = max(dp[i],ans);
        }
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    




    return 0;
}