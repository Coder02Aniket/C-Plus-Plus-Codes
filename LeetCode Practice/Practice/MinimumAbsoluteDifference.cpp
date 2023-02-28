#include<iostream>
#include<vector>
#include<algorithm>
#define INT_MAX INT32_MAX ;
using namespace std ;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(0);
        std::cout.tie(0);
        vector<vector<int>> result  ;
        int MinDiff = INT_MAX - 1  ;
        sort(arr.begin(),arr.end()) ;
        for(int i = 0 ; i < arr.size() -1  ; i++){
            int b = i + 1 ;
            int abst = abs(arr[b] - arr[i]);
            if( abst < MinDiff){
                MinDiff = abst ;
                result.clear() ;
                result.push_back({arr[i],arr[b]});
                
            }
            else if(abst == MinDiff){
                result.push_back({arr[i],arr[b]}) ;
            }
        }
        return result ;
    }
};