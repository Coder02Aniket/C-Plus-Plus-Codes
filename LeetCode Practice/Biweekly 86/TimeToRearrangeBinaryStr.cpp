/**
 * You are given a binary string s. In one second, all occurrences of "01" are simultaneously replaced with "10". This process repeats until no occurrences of "01" exist.

Return the number of seconds needed to complete this process.
**/

#include<bits/stdc++.h>
using namespace std;

class Solution {

public :
    int secondsToRemoveOccurrences(string s) {
        int zeroes = 0 , seconds = 0 ;
        for (int i = 0 ; i < s.length() ;i++){
            if(s[i] == '0'){
                zeroes++ ;
                
            }
            else if(zeroes>0){
                seconds = max (seconds+1,zeroes) ;
            }
        }
        return seconds ;
    }
};        

int main(){
    Solution ob ;

    cout << ob.secondsToRemoveOccurrences("0110101") ;
    return 0;
}