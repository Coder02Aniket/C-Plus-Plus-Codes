#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int temp, size, result = 0, j = 0, k = 0, flag = 1;
        cin >> size;
        vector<int> arr(size, 0);
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            result = arr[i];
            j = i + 1;
            k = size - 1;
            while (j < k)
            {
                if ((arr[i] + arr[j] + arr[k]) % 2)
                {

                    flag = 0;
                    cout << "YES\n"
                         << i+1 << " " << j+1 << " " << k+1 << endl;
                    i = size;
                    j = k;
                }
                j++;
                k--;
            }
        }
        if (flag == 1)
        {
            cout << "NO\n";
        }
    }

    return 0;
}