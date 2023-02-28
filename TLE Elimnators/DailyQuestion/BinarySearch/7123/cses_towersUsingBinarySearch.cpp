#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    int n;
    cin >> n;
    vector<int> arr(n, 0), towers;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int left = 0, right = towers.size()-1, mid = 0;
        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (towers[mid] > arr[i])
            {
                right = mid - 1  ;
            }
            else
            {
                left = mid + 1;
            }

        }
        if(left == towers.size()){
            towers.push_back(arr[i]);
        }else{
            towers[left]= arr[i];
        }
    }
    cout << towers.size() << endl ;

    return 0;
}