#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> RecursiveWays(vector<int> &ans, string& expression , int start ,int end , int n )
    {
        
        if(end - start <= 1 ){
            
            ans.push_back(stoi(expression));
            return ans; 
        }
        for(int i = start ; i <=end ; i++){

            if(expression[i]== '+' || expression[i]=='-' || expression[i]=='*'){

                vector<int>left = RecursiveWays(ans,expression,start,i-1,n);
                vector<int>right = RecursiveWays(ans,expression,i+1,end,n);

                for(int j = 0 ; j < left.size() ; j++){

                    for(int k = 0 ; k < right.size() ; k++){
                        
                        if(expression[i]=='+'){
                            ans.push_back(left[j] + right[k]) ;
                        }else if(expression[i]=='*'){
                            ans.push_back(left[j] * right[k]);
                        }else{
                            ans.push_back(left[j]-right[k]);
                        }
                    }
                }
            }
        }
        return ans ;

    }
    vector<int> diffWaysToCompute(string expression)
    {
        vector<int> ans , ans1;
        int size = expression.length();
        ans = RecursiveWays( ans1, expression ,0,size-1,size);
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    freopen("diffways.txt", "r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    string s;
    cin >> s;
    Solution *ob;
    vector<int> a = ob->diffWaysToCompute(s);
    for(int i : a ){
        cout << i << ' ';
    }

    return 0;
}