#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

int countDistinctIntegers(vector<int>& nums) {
    vector<int>uset(nums);

    string num ;
    int uset_num ;
    for(int i = 0 ; i < nums.size();i++){
        if(uset[i]> 9){
           num = to_string(uset[i]);
           reverse(num.begin(),num.end());
           uset_num = stoi(num);
           uset.push_back(uset_num);
        }
    }
    unordered_set<int>uset1(uset.begin(),uset.end());
    return uset1.size() ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int>i={1,2,3,4,5};
    countDistinctIntegers(i);
    
    return 0;
}