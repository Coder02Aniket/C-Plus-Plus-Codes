#include<iostream>


using namespace std;

void mergeTwoSorted(int* arr1 , int* arr2){
    int final_array_size = 11 , arr1_size = 6 , arr2_size = 5 ;
    int final_array[11] = {0} ;
    int i  = 0 , j = 0 , k = 0 ;
    while( i < arr1_size && j < arr2_size ){
        if(arr1[i] <= arr2[j]){
            final_array[k] = arr1[i] ;
            i++;
            k++;
        }
        else{
            final_array[k] = arr2[j] ;
            k++;
            j++;
        }
    }
    while(i < arr1_size){
        final_array[k] = arr1[i] ;
        i++,k++;
    }
    while(j < arr2_size){
        final_array[k] = arr2[j] ;
        j++,k++;
    }

}
int main(){
    int arr1[10] = {1,3,5,7,9,10} ;
    int arr2[10] = {2,4,6,8,11} ;
    mergeTwoSorted(arr1,arr2) ;

    
    return 0;
}