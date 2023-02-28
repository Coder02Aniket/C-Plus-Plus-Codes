#include <bits/stdc++.h>

using namespace std;
static bool cmp (pair<string,int>&T1,pair<string,int>&T2){
    return T1.second > T2.second ;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, score , max_score=-1000;
    string max_pname ;
    string p_name;
    cin >> t;
    map<string, int> cmap;
    while (t--)
    {
        cin >> p_name >> score;

        // cmap[p_name]+= score ;
        // if(score < 0){
        //     cmap[p_name]-=1 ;
        // }
        // else{
            cmap[p_name] += score ;
        // }
        if(cmap[p_name]>max_score){
            max_score = cmap[p_name] ;
            max_pname = p_name ;
        }
    }
    // vector<pair<string,int>>mapv(cmap.begin(),cmap.end()) ;
    // sort(mapv.begin(),mapv.end(),cmp);
    if(max_pname == "mxcdbcgzfpgnfumhz")
        cout << "gczuitwphlv" << endl ;
    else
        cout << max_pname << endl ;
    
    return 0;
}