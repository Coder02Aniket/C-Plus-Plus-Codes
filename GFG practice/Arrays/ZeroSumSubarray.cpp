#include<bits/stdc++.h>

#define print(c) cout << c << endl ;

using namespace std;

int NumZeroSumSubarray(vector<long long >& a , int n){
    unordered_map<long long,long long> remember ;
    long long count = 0  , sum = 0;
    // Logic is sum is your prefix sum variable if same sum is repeating in a interval then it means elements in the interval contributed nothing to the sum i.e(zero) so we increment the count by 1 to consider all possible cases if we encounter same number multiple times then we add number of times it was encountered
    for(int i = 0 ; i < n ; i++){
        sum = sum +  a[i];
        if(sum == 0){
            count = count + 1 ;
        }
        if(remember.find(sum) != remember.end()){
            count += remember[sum] ;
        }
        remember[sum] = remember[sum] + 1; 
    }
    return count ;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ; 
    cin >> t ;
    while(t--){

    }

    




    return 0;
}