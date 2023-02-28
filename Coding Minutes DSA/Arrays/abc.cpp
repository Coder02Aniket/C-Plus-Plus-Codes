#include <bits/stdc++.h>
using namespace std;

bool GreaterSec( pair<int, int> &a,  pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}
int countActivites(vector<pair <int, int> > activities)
{
    // Complete this method
    int n = activities.size();
    sort(activities.begin(), activities.end(), GreaterSec);
    // for(pair<int,int> i : activities){
    //     cout << "("<< i.first <<" " <<i.second << ")" << " " ;
    // }
    cout << endl;

    int count = 0;
    int start = 0;
    for (int i = 0; i < n ; i++)
    {
        if (activities[i].first >= start)
        {
            start = activities[i].second;
            count++;
        }
    }

    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<pair <int, int> > vp;
        for (int i = 0; i < n; i++)
        {
            int st = 0;
            int end = 0;
            cin >> st >> end;
            vp.push_back(make_pair(st, end));
        }
        cout << countActivites(vp) << endl;
        vp.clear();
    }

    return 0;
}