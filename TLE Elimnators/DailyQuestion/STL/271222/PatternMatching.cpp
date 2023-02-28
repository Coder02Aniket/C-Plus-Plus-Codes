//Thanks to Manthan for Great Explaination
#include <bits/stdc++.h>

using namespace std;

pair<pair<int, int>,pair<int,int>> PatternMatching(vector<int> &pattern, int size)
{
    // stack<int> stk;
    int tnd = 0, pnd = 0, tmaxseq = 0, pmaxseq = 1 , last_zero = -1 ;
    pair<int, int> nd = {0, 0} , maxseq = {0,0};
    // map<int, int, greater<int>> nestingD, maxSeq;
    // for (int i = 0; i < size; i++)
    // {
    //     if (pattern[i] == 1)
    //     {
    //         stk.push(1);
    //         nd = max(nd, (int)stk.size());
    //         if (nestingD.find(nd) == nestingD.end())
    //         {
    //             nestingD[nd] = i;
    //         }
    //     }
    //     else
    //     {
    //         stk.pop();
    //     }
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     if(pattern[i]==1){
    //         stk.push(1);
    //     }
    //     if (!stk.empty())
    //     {
    //         tmaxseq++;
    //         maxseq = max(maxseq, tmaxseq);
    //         if (maxSeq.find(maxseq) == maxSeq.end())
    //         {
    //             maxSeq[maxseq] = i;
    //         }
    //     }else
    //     {
    //         tmaxseq = 0;
    //     }
    //     if(pattern[i]==2){
    //         stk.pop();
    //     }
    // }
    // auto itr = nestingD.begin() , itr1 = maxSeq.begin();
    // return {{(*itr).first,(*itr).second},{(*itr1).first,(*itr1).second}};

    // for (int i = 0; i < size; i++)
    // {
    //     if (pattern[i] == 1)
    //     {
    //         stk.push(1);
    //         tnd++;
    //         if (tnd > nd.first)
    //         {
    //             nd = make_pair(tnd, i+1);
    //         }
    //     }
    //     else
    //     {

    //         tnd = 0;
    //         stk.pop();
    //         tmaxseq+=2 ;
    //         if(stk.empty()){
    //             if(tmaxseq>maxseq.first){
    //                 maxseq = make_pair(tmaxseq , i+2  - tmaxseq );
    //             }
    //             tmaxseq = 0 ;
    //         }
    //     }

    // }
    // return {nd , maxseq};
    vector<int> pre_sum(size,0);
    pre_sum[0] = 1;
    pmaxseq = 1 ;
    for(int i = 1; i < pattern.size() ; i++){
        if(pattern[i]==1){
            pre_sum[i] = pre_sum[i-1] + 1 ;
        }
        else{
            pre_sum[i]= pre_sum[i-1]- 1; 
        }
    }
    // 1 0 1 2 1 0 1 0 1 2 1 2 1 0 1 2 1 2 1 0
    // for(int i : pre_sum){
    //     cout << i << " ";
    // }
    for(int i = 0 ; i < size ; i ++){
        if(pre_sum[i]>tnd){
            tnd = pre_sum [i];
            if(tnd > nd.first){
                nd = {tnd,i+1};
            }
        }
        if(pre_sum[i]== 0){
            if(last_zero){
                tmaxseq= i - last_zero ;
                if(tmaxseq>maxseq.first){
                    maxseq = {tmaxseq,last_zero+2};
                }
            }else{
                tmaxseq = i + 1 ;
                if(tmaxseq>maxseq.first){
                    maxseq = {tmaxseq , 0 } ;
                }
            }
            last_zero = i ;
        }
        
    }
    return {nd,maxseq};


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<pair<int, int>,pair<int,int>> vpair = PatternMatching(arr, n);
    cout << vpair.first.first << " " << vpair.first.second <<" " << vpair.second.first <<" " <<  vpair.second.second << endl ;

    return 0;
}