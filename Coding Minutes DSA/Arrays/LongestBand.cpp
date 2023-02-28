/*
Given an array N integers find length of longest band .
A Band is defined as a subsequence which can be re-ordered in such a manner all elements appear consecutive (with absolute difference of 1 between neighbouring elements )
**/

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std ;
int LengthOfLongestBand(vector<int>& nums){
    unordered_set <int> f ;
    int maxi = 0;
    for(int i : nums ){
        f.insert(i) ;
    }
    for(int  i : f){
        if(f.find(i-1) == f.end()){
            int count = 1 ;
            while(f.find(i+1) != f.end()){
                i++;
                count++;
            }
            maxi = max(maxi,count);
            continue ;

        }

    }
    return maxi ;
}
int main(){
    vector<int> test = {100 ,4 ,200 ,1 ,3 ,2} ;
    cout << LengthOfLongestBand(test) ;
}