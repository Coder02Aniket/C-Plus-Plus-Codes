#include<iostream>
#include<vector>

using namespace std;

vector<int> ArrayAdd(vector<int>& nums1  , vector<int>& nums2){
    int nums1_size = nums1.size() , nums2_size = nums2.size() , result1 = 0 , result2 = 0 ;
    for(int i = 0 ;i < nums1_size ; i++){
        result1 = result1*10+ nums1[i] ;
    }
    
    for(int i = 0 ; i < nums2_size; i++){
        result2 = result2*10+nums2[i] ;
    }
    // cout << result1 << "  " << result2 ;
    int Final_sum = result1+ result2 ;
    // cout << Final_sum ;
    cout << endl;
    vector<int>Final_arr;
    while(Final_sum>0){
        int insert1 = Final_sum % 10 ;
        Final_arr.emplace(Final_arr.begin(),insert1);
        Final_sum = Final_sum / 10 ;

    }
    Final_arr.shrink_to_fit() ;
    return Final_arr ;
}
int main(){
    vector<int> a = {1,2,3} , b = {9,9},m ;
    m = ArrayAdd(a,b);
    for(int  i : m ){
        cout << i << " " ;
    }
    
    return 0;
}