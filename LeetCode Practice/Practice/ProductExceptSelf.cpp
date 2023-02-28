#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int>pref(n,1),suff(n,1),result(n,1);
        pref[0] = arr[0];
        suff[n-1] = arr[n-1] ;
        for(int i = 1; i < n ; i++){
            pref[i] = pref[i-1]* arr[i] ;
        }
        for(int j = n - 2; j >= 0 ; j--){
            suff[j] = suff[j+1] * arr[j] ;
        }
        for(int i = 0 ; i < n ; i++){
            if (i == 0 ){
                result[i] = suff[i+1] ;
            }
            else if(i == n -1 ){
                result[i] = pref[i-1] ;
            }
            else{
                result[i] = pref[i-1]*suff[i+1] ;
            }
        }
        return result; 
    }
    
};
int main(){
    vector<int>tc = {1,2,3,4} ;
    Solution ob ;
    auto op = ob.productExceptSelf(tc) ;
    for(int i : op){
        cout << i <<"  " ;
    }
}
