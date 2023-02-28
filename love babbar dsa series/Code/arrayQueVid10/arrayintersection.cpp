#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> result;
        vector<int>::iterator it;
        nums1.pop_back() ;
        for (int i = 0; i < nums2.size(); i++)
        {
            int ser = nums2[i];
            it = find(nums1.begin(), nums1.end(), ser);
            if (it != nums1.end())
            {

                result.push_back(nums2[i]);
            }
        }
        sort(result.begin(), result.end());
        it = unique(result.begin(), result.end());
        result.resize(distance(result.begin(), it));
        return result;
    }
};
int main()
{
    Solution a;
    vector<int> nums{0, 10, 12, 15, 7, 49, 6};
    vector<int> nums2{0, 10, 12, 45, 7, 49, 6};
    vector<int> result(a.intersection(nums, nums2));
    // for (int i : result)
    // {
    //     cout << i << " ";
    // }
    for(int i : nums){
        cout << i << "  " ;
    }
    return 0;
}
