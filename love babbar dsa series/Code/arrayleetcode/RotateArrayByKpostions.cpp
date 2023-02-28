#include<iostream>
#include<algorithm>


using namespace std;

void RotateArrayToRight(int arr[],int n , int k ){
    int new_arr[n]={0};
    for(int i = 0 ;  i < n ;i++){
        new_arr[(i+k)%n] = arr[i];
    }
    for(int i : new_arr){
        cout << i << " ";
    }
}
void RotateArrayToLeft(int arr[],int n , int k ){
    k = k % n ;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n) ;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    // RotateArrayToRight(arr,7,3);
    RotateArrayToLeft(arr,10,3) ;
    
    return 0;
}