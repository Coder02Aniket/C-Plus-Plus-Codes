#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool checkInclusion(string s1, string s2)
{
    unordered_map<char, int> s1_map, s2_window_map;
    for (char i : s1)
    {
        s1_map[i]++;
    }
    int window_start = 0, window_end = s1.length() - 1;
    bool flag;
    while (window_end < s2.length())
    {
        for(int i = window_start ; i <= window_end ; i++){
            s2_window_map[s2[i]]++;
        }
        if(s1_map == s2_window_map){
            return true;
        }
        s2_window_map.clear() ;
        window_start++,window_end++;
    }
    return false ;
}
int main()
{
    cout << checkInclusion("cda", "dcda");

    return 0;
}