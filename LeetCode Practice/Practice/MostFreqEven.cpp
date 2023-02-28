// https://leetcode.com/problems/most-frequent-even-element/
#include<iostream>
#include<vector>
#include<unordered_map>



using namespace std;

int MostFreqEvenElement(vector<int>& nums){
    unordered_map<int , int > count ;
    
    int even_count = -1 ;
    int min_even_max_count = -1 ;
    for(int i : nums){
        if(!(i&1)){
            
            count[i]++;
        }
    // for(int i : nums){
        if(count[i]>even_count){
            even_count = count[i] ;
            min_even_max_count = i ;
        }
        if(count[i] == even_count){
            if(min_even_max_count > i){
                min_even_max_count = i ;
            }
        }

    }
    return min_even_max_count ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    return 0;
}