#include <bits/stdc++.h>

using namespace std;

int countPrime(int n)
{
    int count = 0;
    vector<bool> isPrime(n, true);

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;
            for (int j = 2; j * i < n; j++)
            {
                isPrime[j * i] = false;
            }
        }
    }
    // if we want to print prime numbers
    // for (int i = 2; i < n; i++)
    // {
    //     if (isPrime[i])
    //     {
    //         cout << i << " ";
    //     }
    // }
    return count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    // countPrime(n);
    cout << countPrime(n) << endl;

    return 0;
}