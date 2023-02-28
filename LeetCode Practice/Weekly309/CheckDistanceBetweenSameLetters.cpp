#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkDistances(string s, vector<int> &distance)
    {
        int s_len = s.length();
        int first_occ = 0, next_occ = 0, no_of_letters_between = 0;
        int freq[26] = {0};
        bool flag = true;
        // for (char i : s)
        // {
        //     freq[i - 97]++;
        // }
        // for (int i = 0; i < 26; i++)
        // {
        //     if (freq[i] == 2)
        //     {
        //         char to_find = i + 97;
        //         // cout << to_find <<endl ;
        //         first_occ = s.find(to_find);
        //         next_occ = s.find(to_find,first_occ+1);
        //         // cout << first_occ << " " << next_occ << endl;
        //         no_of_letters_between = next_occ - first_occ - 1;
        //         // cout << distance[i] <<endl ;
        //         if (distance[i] != no_of_letters_between)
        //         {
        //             return false;
        //         }
        //     }
        // }
        // return true;
        //>>>>>>>>>>>>>> Optimized code<<<<<<<<<<Leetcode>>>>>>>>>
        for(int i = 0 ; i < s.length() ; i++){
            if(freq[s[i]-'a']== 0){
                freq[s[i]-'a'] = i;
            }
            else{
                // cout << distance[s[i]-'a'] << " " << i - freq[s[i]-'a'] << endl ;
                if(distance[s[i]-'a'] != (i - freq[s[i]-'a']-1)){
                    return false ;
                }
            }
        }
        return true ;
    }
};
int main()
{
    Solution ob;
    vector<int> v = {1, 3, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cout << ob.checkDistances("abaccb", v);
}