#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>

/****
 * https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/
 * we have to calculte subarray having maximum and value so the subarray having maximum and will always be maximum number because minimum number on and'ing with maximum gives number which is less than maximum so we calculated maximum number and then counted its number of occurances which are consecutive
 * **/

using namespace std;

int LongestSubarrayWithMaxAnd(vector<int>arr){
    // unordered_map<int,int>un_map ;

    int maxi = *(max_element(arr.begin(),arr.end())) ;
    int mid_length = 0 , max_length =0 ;
    // for(int i = 0 ; i < arr.size() ;i++){
    //     if(arr[i]>maxi){
    //         maxi  = arr[i] ;
    //     }
    // }

    for(int i = 0 ; i < arr.size() ; i ++){
        if(arr[i] == maxi) 
        {    
            mid_length++;
        }else{ 
            mid_length = 0 ;
        }
        max_length = max (mid_length,max_length) ;

    }
    return max_length;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int>arr = {1,2,3,3,2,2} ;
    cout << LongestSubarrayWithMaxAnd(arr) << endl;
    
    return 0;
}