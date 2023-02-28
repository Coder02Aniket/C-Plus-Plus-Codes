#include <bits/stdc++.h>

using namespace std;

int vowelCount(string s, int i, int size)
{
    if (i == size)
    {
        return 0;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return 1 + vowelCount(s, i + 1, size);
    }
    return 0 + vowelCount(s, i + 1, size);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = "Data Structure Lab";
    getline(cin, s);
    cout << vowelCount(s, 0, s.size()) << endl;
    return 0;
}