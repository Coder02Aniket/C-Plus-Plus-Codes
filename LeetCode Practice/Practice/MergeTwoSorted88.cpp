#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j =  n - 1 , k = m + n -1 ;
        while(i >= 0 && j >= 0 ){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i] ;
                i--,k--;
            }
            else{
                nums1[k] = nums2[j];
                j--,k--;
            }
        }
        while(i >= 0 ){
            nums1[k] = nums1[i] ;
            k--,i--;
        }
        while(j >= 0 ){
            nums1[k] = nums2[j] ;
            j--,k--;
        }
    }
};
int main(){
    Solution ob ;
    vector<int>nums1,nums2 ;
    nums1 = {1,2,3,0,0,0} ;
    nums2 = {2,5,6} ;
    ob.merge(nums1,3,nums2,3) ;
    
}