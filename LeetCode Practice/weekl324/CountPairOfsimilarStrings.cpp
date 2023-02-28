#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    int similarPairs(vector<string>& words) {
        int l = words.size(),count = 0 ;
        vector<set<char>>vechar(l);
        for(int i = 0 ; i < l ; i++){
            for(char j: words[i]){
                vechar[i].insert(j) ;

            }
        }
        for(int i = 0 ; i < l-1 ;i++){
            

        }
        return count ;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    




    return 0;
}