#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int l , m , r , x ; 
int binarysearch(int arr[], int n, int k){
    if (n >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarysearch(arr, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarysearch(arr, mid + 1, x);
    }
    return -1;  


    }

int main(){
    int example[] = {1,2,3,4};
    int k = 4;
    int n = 4 ;
    int result = binarysearch(example,n,k) ;
    cout << result << endl ;


    
    
    return 0;
}