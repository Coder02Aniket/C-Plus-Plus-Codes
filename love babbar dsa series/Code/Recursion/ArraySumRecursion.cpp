#include<bits/stdc++.h>


using namespace std;
int arraySum(int* arr,int size){
    
    if(size == 1){
        return arr[size-1];
    }
    return arr[size-1] +  arraySum(arr,size-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    
    int arr[10] ={11,74,8,5,45,2,4,5,1,4};
    cout <<arraySum(arr,10);



    return 0;
}