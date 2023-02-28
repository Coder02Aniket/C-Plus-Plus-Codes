#include <bits/stdc++.h>

using namespace std;

class KthLargest
{
public:
    // vector<int> nums;
    int index = 0, number = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    static bool cmp(int a, int b)
    {
        if (a > b)
        {
            return true;
        }
        return false;
    }

    KthLargest(int k, vector<int> &nums)
    {
        index = k;
        // nums = n;
        sort(nums.begin(), nums.end(), cmp);
        // // for(int i : nums){
        // //     cout << i << " ";
        // // }
        // if(n.size()>0){
        //     number = nums[index-1];
        // }
        if(nums.size()){
            for(int i = 0 ; i < (min(index,(int)nums.size())); i++ ){
                pq.push(nums[i]);
            }
        }
        else{
            pq.push(INT_MIN);
        }

        
    }
    int add(int val)
    {
        if (val > pq.top() || pq.size() < index)
        {
            if(pq.size()>=index){
                pq.pop();
            }
            pq.push(val);
            return pq.top();
        }
        else
        {
            return pq.top();
        }
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("errors.txt","w",stderr);
    // #endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums = {2, 4, 5, 8};
    KthLargest *obj = new KthLargest(3, nums);
    cout << obj->add(3) << endl;
    cout << obj->add(5) << endl;
    cout << obj->add(10) << endl;
    cout << obj->add(9) << endl;
    cout << obj->add(4) << endl;

    return 0;
}
