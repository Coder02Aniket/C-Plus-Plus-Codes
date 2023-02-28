#include <bits/stdc++.h>

using namespace std;
string binarysearch(vector<int>&arr,int query){
    int left = 0 , right = arr.size() , middle = 0 ;
    while(left<=right){
        middle = left + (right - left)/2 ;
        if(arr[middle]==query){
            return "YES";
        }else if(arr[middle]>query){
            right = middle - 1 ;
        }else{
            left =  middle + 1 ;
        }
    }
    return "NO" ;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    int n, no_of_queries,query;
    cin >> n;
    cin >> no_of_queries;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (no_of_queries--)
    {
        cin >> query ;
        cout << binarysearch(arr,query)<< endl;
    }

    return 0;
}