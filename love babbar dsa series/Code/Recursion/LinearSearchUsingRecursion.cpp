#include<bits/stdc++.h>


using namespace std;

bool RecursiveLinearSearch(int* arr , int size , int key){
    if(size == 0){
        return false ;
    }
    if(arr[0] == key){
        return true ;
    }
    return RecursiveLinearSearch(arr+1,size-1,key);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int arr[10] ={11,74,8,5,45,2,4,5,1,4};
    int arr[1]= {33};
    cout << RecursiveLinearSearch(arr,1,33);



    return 0;
}