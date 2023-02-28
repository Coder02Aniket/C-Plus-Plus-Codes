#include<bits/stdc++.h>


using namespace std;

bool isSorted(int arr[] , int i , int size){
    int j = i + 1 ;
    if(j == size){
        return true;
    }else if(arr[i]>arr[j]){
        return false ;
    }else{
        return isSorted(arr,i+1,size);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5]={1};
    cout << ((isSorted(arr,0,1)-1) == 0 )? ("sorted"):("not sorted");
    




    return 0;
}