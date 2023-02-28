#include<bits/stdc++.h>



using namespace std;

class Solution {
    string oddString(vector<string>& words) {
        int diff_value ; 
        vector<vector<int>>Difference ;
        for(string i : words){
            for(int j = 0  ; j < i.length()- 1 ; j++){
                diff_value = i[j+1] - i[j]  ;
                if(j != 0 and )
                    Difference[j].push_back(diff_value) ;
            }

        }
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    return 0;
}