#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>

// Consistency is key 
// Thanks to pankaj kumar for hint and proper explaination 

using namespace std;
int gcd(int a , int b ){
	return b == 0 ? a : gcd(b, a % b);
}
int Max_IndexSum_Coprime(vector<int>& v){
    int  sum = -1 , max_sum= -1 ;
    for(int i =1 ; i < 1001 ; i++){
        for(int j = 1; j < 1001; j++){
            if(v[i] && v[j] && gcd(i,j)== 1){
                sum = v[i] + v[j] ;

            }
            if(sum > max_sum){
                max_sum = sum ;
            }
        }
    }
    return max_sum ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , n , temp ;
    cin >> t ;
    while(t--){
        cin >> n ;
        vector<int>v(1001,0);
        for(int i = 1; i < n+1 ; i++){
            cin >> temp ;
            v[temp] = i ; 
        }
        cout << Max_IndexSum_Coprime(v) << endl ;
        // cout << gcd(1,1);
        v.clear() ;
    }
    return 0;
}