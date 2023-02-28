#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>



using namespace std;

int SmallestSubsetWithGreaterSum(vector<int>& arr  , int size){
    int soa = 0 , i = size -1 , j = size - 1 , sum = 0 ;
    for(int i : arr){
        soa += i ;
    }
    sort(arr.begin() , arr.end()) ;
    while(i>=0){
        sum += arr[i] ;

        if(sum > soa - sum){
            break ;
        }
        i--;
    }
    return (j - i ) + 1 ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> I = {5,3,2,8,4,1} ;
    cout << SmallestSubsetWithGreaterSum(I,6) << endl ;
    
    return 0;
}