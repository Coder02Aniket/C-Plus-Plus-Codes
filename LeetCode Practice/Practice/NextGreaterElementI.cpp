#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums1 ={4,1,2} , nums2 = {1,3,4,2};
    Solution *ob;
    ob->nextGreaterElement(nums1, nums2);

    return 0;
}
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int s1 = nums1.size(), s2 = nums2.size() , idx = 0;
        stack<int> st;
        vector<int> ans(nums1.size(), -1),full_ans(nums2.size(),-1);

        for (int i = 0; i < s2; i++)
        {
            while(!st.empty() && nums2[i] > nums2[st.top()]){
                full_ans[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }

        for(int i = 0 ; i < s1 ; i++){
            idx = find(nums2.begin(),nums2.end(),nums1[i])  - nums2.begin();
            ans[i] = full_ans[idx];

        }

        return ans ;
    }
};