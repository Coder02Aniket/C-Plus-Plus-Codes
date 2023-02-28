#include<iostream>
#include<iterator>
#include<vector>


using namespace std;

int pivotIndex(vector<int>&nums){
    int Lsum =0, Rsum= 0 ,  Total = 0 ;
    int size = nums.size() ;
    int i = 0 ;
    for( i = 0 ; i < size ;  i++){
        Total = Total + nums[i] ;

    }
    
    for( i = 0 ; i < size ;  i++){
        Rsum = Total - (nums[i]+ Lsum) ;

        if(Lsum == Rsum){
            return i ;
        }
        Lsum = Lsum + nums[i] ;
    }
    return -1 ;
}
int main(){
    vector<int> a ;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    cout << pivotIndex(a) ;
    
    return 0;
}