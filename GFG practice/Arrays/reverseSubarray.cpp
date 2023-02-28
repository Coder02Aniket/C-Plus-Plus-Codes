#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

void reverseInGroups(vector<long long int >& arr, int n, int k){
        int group = n / k ;
        vector<long long >::iterator start , end ;
        start = arr.begin() ;
        end = arr.begin() + (group * k );
        while(start < end){
            reverse(start , start + k) ;
            advance(start,k) ;
        }
        reverse(end,arr.end()) ;
        

    }
int main(){
    vector < long long int > arr = { 1,2,3,4,5} ;
    int n = arr.size() ;
    int k = 3 ;
    reverseInGroups(arr,n, k) ;
    for(int i : arr){
        cout << i << " " ;
    }
    
    return 0;
}