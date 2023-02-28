#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

    int shipWithinDays(vector<int> weights, int days)
    {
        // vector<int> pre(weights.size(),0), suf(weights.size(),0);
        // partial_sum(weights.begin(), weights.end(), pre.begin());
        // suf.back() = weights.back();
        // for (int i = weights.size()-2; i >=0; i--)
        // {
        //     suf[i]= suf[i+1]+weights[i];
        // }
        // if(days == 1){
        //     return weights.back();
        // }
        // int pre_value = pre[0], suff_value = (suf[0]%2)?(suf[0] / (days - 1) + 1):suf[0] / (days - 1), i = 1;

        // while (pre_value < suff_value)
        // {
        //     pre_value = pre[i];
        //     if(suf[i]%2)
        //         suff_value = suf[i]/(days - 1) + 1 ;
        //     else
        //         suff_value = suf[i]/(days-1) ;
        //     i++;
        // }
        // i--;

        // return min(pre_value,suff_value);

        // Binary Search by deriving upper and lower bound
        int left = *max_element(weights.begin(), weights.end()), right = accumulate(weights.begin(), weights.end(), 0), mid = 0, res = right;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (canship(mid,weights,days))
            {
                res = min(res,mid);
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return res;
    }
    bool canship(int capacity,vector<int>&weights , int days ){
        int check = 1 , sum = 0 ;
        for(int i : weights){
            if(sum + i  > capacity){
                check = check + 1 ;
                sum = i ;
            }else{
                sum = sum + i ;
            }

        }
        if(check > days){
            return false ;
        }
        return true;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stderr);

    // #endif
    Solution *ob;
    cout << ob->shipWithinDays({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 5) << endl;

    return 0;
}