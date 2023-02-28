#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>



using namespace std;

class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.length(), len = 0 ;
        int start = 0 ;
        while(start < n){
            int i = start ;
            while(i < n-1){
                char curr = s[i] ;
                char next = s[i+1] ;

                if(next - curr == 1) i++ ;
                else break ;
            }
            len = max(len, i - start + 1) ;
            start = i + 1 ;
        }
        return len ;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    return 0;
}