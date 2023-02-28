#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result ;
        

        int num1 = -1 , num2 = -1, count1 = 0 , count2 = 0 ;
        float n = nums.size() / 3;
        for(int i : nums){
            if(i == num1){
                count1++;
            }
            else if (i == num2){
                count2++;
            }
            else if(count1 == 0 ){
                num1 = i ;
                count1++;
            }
            else if(count2 == 0 ){
                num2 = i ;
                count2++;
            }
            else{
                count1--,count2--;
            }
        }
        if(count1 > n){
            result.push_back(num1) ;
        }
        if(count2 > n ){
            result.push_back(num2) ;
        }
        return result ;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution* ob = new Solution() ;
    
    vector<int> nums= {3,2,3} , nums1 ;
    nums1 = ob->majorityElement(nums) ;
    for(int i : nums1){
        cout << i << " " ;
    }
    return 0;
}