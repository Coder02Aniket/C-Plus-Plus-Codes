
#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int eachElemNum=1;
        vector<int> myvec;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;++i){
            if(arr[i]==arr[i+1]){
                ++eachElemNum;
            }
            else{
                myvec.push_back(eachElemNum);
                eachElemNum = 1;
            }
            if((i+1)==arr.size()-1)
                myvec.push_back(eachElemNum);
        }
        sort(myvec.begin(),myvec.end());
        for(int i=0;i<myvec.size()-1;++i){
            if(myvec[i]==myvec[i+1])
                return false;
        }
        return true;
    }
};
int main(){
    Solution s ;
    vector<int> edg(10,1);
    // for(int i : edg)
    //     cout << i <<" " ;
    cout << s.uniqueOccurrences(edg) ;
}