#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt", "r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    string s1, s2;
    cin >> s1;
    cin >> s2;

    // vector<int> arr ,position;
    double sum1 = 0, sum2 = 0, no_of_questions = 0, correct_ans = 0, ans = 0 , flag = 1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
        {
            sum1 += 1;
        }
        else
        {
            sum1 -= 1;
        }

        if (s2[i] == '+')
        {
            sum2 += 1;
        }
        else if (s2[i] == '-')
        {
            sum2 -= 1;
        }
        else
        {
            // position.push_back(i);
            no_of_questions++;
        }
    }
    bitset<10> b;
    unordered_map<int, int> val_occ;
    int mask = 1 << (int)no_of_questions;
    for (int i = 0; i < mask; i++)
    {

        // for(int j = 0 ; j < no_of_questions ; j++){
        b = i;
        val_occ[(b.count() * 2 - no_of_questions)]++;
        // }
    }

    if (no_of_questions > 0 || no_of_questions < 0)
    {
        for (int i = -no_of_questions; i <= no_of_questions; i += 2)
        {
            if (sum2 + i == sum1)
            {
                correct_ans = correct_ans + val_occ[i];
            }
        }
    }
    else
    {
        multiset<char>occ1,occ2 ;

        



        for(int i = 0 ; i < s1.size() ; i++){
            occ1.insert(s1[i]);
            occ2.insert(s2[i]);
        }
        if(occ1.count('+')==occ2.count('+')){
            correct_ans = 1 ;
        }
        
    }
    
    ans = correct_ans / powl(2, no_of_questions);
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}