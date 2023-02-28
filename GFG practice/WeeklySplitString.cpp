#include<bits/stdc++.h>


using namespace std;

class Solution{
	public:
	int splitString(int n,string s)
	{   
        // check for every partion by using prefix array and suffix array 
        int temp_similarities = 0 , final_similarities = 0 ; 
        vector<int>pre_sum(26,0),suff_sum(26,0);
        for(int i = 0 ; i < n ;i++){
            suff_sum[s[i]-97]++;

        }
        for(int i = 0 ; i < n ;i++){
            temp_similarities = 0 ;
            pre_sum[s[i]-97]++;
            suff_sum[s[i]-97]--;
            for(int i = 0  ;  i  < 26 ; i++){
                if(pre_sum[s[i]-97] && suff_sum[s[i]-97]){
                    temp_similarities++;
                }
            }
            final_similarities = max(temp_similarities , final_similarities );
        }
        return final_similarities ;
	}
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    




    return 0;
}