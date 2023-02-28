#include <iostream>
#include <vector>
#include <unordered_set>
#include<unordered_map>

using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    unordered_set<int> Majority;
    vector<int> result;
    unordered_map<int, int> counter;
    float constraint = nums.size() / 3;
    for (int i : nums)
    {
        counter[i]++;
        if (counter[i] > constraint)
        {
            Majority.insert(i);
        }
    }
    for (int k : Majority)
    {
        result.push_back(k);
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums= {2,2} , nums1 ;
    nums1 = majorityElement(nums) ;
    for(int i : nums1){
        cout << i << " " ;
    }
    return 0;
}