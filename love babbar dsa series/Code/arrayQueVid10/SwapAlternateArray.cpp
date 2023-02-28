#include<iostream>


using namespace std;

class SwapAlternateArray{
public:
    SwapAlternateArray(int arr[] , int size){
        
        for(int i =0 ; i <size ;i+=2){
            // if(i+1 < size)//works for array with odd number of elements for even no need 
                swap(arr[i] ,arr[i+1]) ;
        }
    }
};
int main(){

    int arr1[6] = {1,2,3,4,5,6} ;
    int size = sizeof(arr1)/sizeof(int) ;
    
    SwapAlternateArray i(arr1,size) ;
    //output
    for(int i = 0 ;i < size ;i ++){
        cout<<arr1[i]<<" " ;
    }
    
    return 0;
}               
//logic for swap 
/**** Temp = arr[0] 
 *    arr[0] = arr[1]
 *    arr[1] = Temp 
 *     */
