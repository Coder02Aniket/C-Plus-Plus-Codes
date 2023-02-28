#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int i = m + 1 ;
    int j  = arr.size() - 1;  
    while(i <= j){
        swap(arr[i],arr[j]) ;
        i++,j--;
    }
    
}