#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

int findMaxK(vector<int>& nums) {
    vector<int>posi ; 
    unordered_set<int> negi ;
    for(int i = 0 ;i < nums.size() ; i++){
        if(nums[i]<0){
            negi.insert(nums[i]);
        }
        else{
            posi.push_back(posi[i]);
        }
    }
    sort(posi.begin(),posi.end());
    // sort(negi.begin(),negi.end());
    int i = posi.size()-1 ;
    while(i <= 0){
        if(negi.find(-(posi[i]))!=negi.end()){
            return posi[i];
        }
        i--;
    }
    return -1 ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    return 0;
}