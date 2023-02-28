#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int till, s, numbers_count = 0;
    cin >> till >> s;

    int i, j, k;
    // vector<int> v(till + 1);
    // vector<vector<int>> result;
    // iota(v.begin(), v.end(), 0);
    // BruteForce
    for( i = 0; i <= till; i++){
        for( j = 0 ; j <= till ;j++){
            int z = s - j - i ;
            if(z>= 0  and z <= till){
                numbers_count++;
            }
        }
    }
    cout << numbers_count << endl;

    return 0;
}