#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> s1_map(26, 0), map_in_window(26, 0),index ;
        int str_check_len = p.length();
        for (int i = 0; i < str_check_len; i++)
        {
            s1_map[p[i] - 'a']++;
        }

        int window_start = 0, window_end = str_check_len - 1, i = 0;
        while (window_end < s.length())
        {
            i = window_start;
            while (i <= window_end)
            {
                map_in_window[s[i] - 'a']++;

                i++;
            }
            if (map_in_window == s1_map)
            {
                index.push_back(window_start) ;
            }
            for (int i = 0; i < 26; i++)
            {
                if (map_in_window[i] > 0)
                {
                    map_in_window[i] = 0;
                }
            }

            window_start += 1;
            window_end += 1;
        }

        return index ;
    }
};
    int main()
    {
        Solution *ob = new Solution();
        vector<int> abc = ob->findAnagrams("cbaebabacd", "abc");
        for (int i : abc)
        {
            cout << i << " ";
        }
        return 0;
    }