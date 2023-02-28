#include<iostream>
#include<string>
#include<vector>
using namespace std ;
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        // unordered_map<int , int> ump ;
        int final_count = INT32_MAX;
        for(int i = 0  ; i <= blocks.length() - k; i++){
            int temp = 0 ;
            for(int j = i;j < i + k && i + k <= blocks.length(); j++ ){
                if(blocks[j] == 'W'){
                    temp++ ;   
                }
            }
            final_count = min(final_count , temp);
        }
        return final_count ;
    }
};
int main(){
    string a = "WBBWWBBWBW";
    int k = 7 ;
    Solution* ob = new Solution() ;
    cout << ob->minimumRecolors(a,k) ;


}