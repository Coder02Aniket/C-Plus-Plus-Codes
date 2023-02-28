#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int kthGrammar(int N, int K) {
	if (N == 1) return 0;
	if (K % 2 == 0) return (kthGrammar(N - 1, K / 2) == 0) ? 1 : 0;
	else return (kthGrammar(N - 1, (K + 1) / 2) == 0) ? 0 : 1;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    Solution *ob;
    cout << ob->kthGrammar(30, 1) << endl;

    return 0;
}
