#include<iostream>
#include<algorithm>
#include<math.h>


using namespace std;
int biggest_on_digit_deletion(int nums){
    int arr_num[4]= {};
    int m =  0 ;
    while(nums > 0){
        arr_num[m] = nums % 10 ;
        nums = nums /  10  ;
        m++;
    }
    int min_ele = 10 ;
    int result = 0 ;
    for(int i = 0 ;i < 4 ; i++){
        min_ele = min( min_ele , arr_num[i]) ;
    }
    for(int i = 3 ; i >= 0 ; i--){
        if(arr_num[i] == min_ele){
            continue; 
        }
        else{
            result = result* 10 + arr_num[i] ;
        }
    }
    
    return result ;
}
int main(){
    int ans = biggest_on_digit_deletion(9817);
    cout << ans ;
    return 0;
}