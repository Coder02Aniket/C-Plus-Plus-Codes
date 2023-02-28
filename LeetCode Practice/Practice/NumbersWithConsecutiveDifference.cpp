#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
// Wrong Answer only half test case passing so check it out next time ;;;;;
    vector<int> numsSameConsecDiff(int n, int k) {
        ios::sync_with_stdio(false) ;
        cin.tie(0) ;
        vector<int> result,num_array(n,0);
        for(int i = n ; i < n*10 ; i++){
            // string num_string = to_string(i) ;
            bool flag = true ;
            // for(int i = 0 ; i < num_string.length() - 1 ;i++){
            //     int num1 = stoi(to_string(num_string[i])) ;
            //     int num2 = stoi(to_string(num_string[i+1]));
            //     if(abs(num1-num2)!= k){
            //         flag = false ;
            //     }
            // }
            int count = 0 ;
            while(i > 0){
                int nt = i % 10 ;
                num_array[count++] = nt ;
                i = i / 10 ;
            }
            for(int w = 0 ; w < num_array.size()-1 ; w++){
                if(abs(num_array[w]-num_array[w+1]) != k){
                    flag = false ;
                    break ;
                }
            }
            
            if(flag){
                result.push_back(i) ;
            }
            num_array.clear() ;
            count = 0 ;
            
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