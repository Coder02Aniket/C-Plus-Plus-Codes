#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;

    cin >> n;
    char c;
    // We can use 
    // unordered_multiset<char> uset;
    unordered_map<char,int>uset ;
    // can also use unorderd multimap
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        // uset.insert(c);// for set
        uset[c]++;
    }
    if (uset['A'] > uset['D'])
    {
        cout << "Anton" << endl;
    }
    else if(uset['A'] < uset['D'])
    {
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl ;
    }

    return 0;
}