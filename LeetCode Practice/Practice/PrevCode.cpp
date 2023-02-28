#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        ios::sync_with_stdio(false)  ;
        cin.tie(0) ;
        vector<int> result ;
        int start_num = pow(10,n-1) ;
        for(int i = start_num ; i < start_num*10 ; i++){
            string num_string = to_string(i) ;
            bool flag = true ;
                for(int i = 0 ; i < num_string.length() - 1 ;i++){
                    int num1 = stoi(to_string(num_string[i])) ;
                    int num2 = stoi(to_string(num_string[i+1]));
                    if(abs(num1-num2)!= k){
                        flag = false ;
                    }
                }
                if(flag){
                    result.push_back(i) ;

                }
            }
                   return result ; 
    }


};
int main(){
        Solution ob  ;
        vector<int> v;
        v = ob.numsSameConsecDiff(3,7) ;
        for(int i : v){
            cout << i << " " ;
        }
}