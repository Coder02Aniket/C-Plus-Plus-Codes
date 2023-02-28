#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;
class Solution{ 
public : 

    static bool cmp(const pair<string,int> &p1 , const pair<string,int>&p2){
        if(p1.second > p2.second){
            return true ; 
        }
        return false ;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
            vector<pair<string , int > > result ;
            for(int i = 0 ; i < names.size() ; i++){
                result.push_back(make_pair(names[i],heights[i])) ;
            }
            sort(result.begin(),result.end(),cmp) ;
            for(int i = 0 ; i < result.size() ; i++){
                names[i] = result[i].first ;
            }
            return names ;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution* ob = new Solution() ;
    vector<string>name = {"Aniket","Mahesh","Adit"},ret;
    vector<int>heights = {162,154,155} ;
    ret = ob->sortPeople(name,heights) ;
    for(string i : name){
        cout << i << " " ;
    }


    
    return 0;
}