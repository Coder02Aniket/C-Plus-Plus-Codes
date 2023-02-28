#include<bits/stdc++.h>


using namespace std;
#define int long long 
int ArraySum(int* arr, int i, int size){
    if(i==size){
        return 0;
    }
    
    return  arr[i]  + ArraySum(arr,i+1,size);

}
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n ;
    cin >> n ;
    int arr[n]={0};
    for(int i = 0 ;  i <  n ;i++){
        cin >> arr[i];
    }
    
    cout <<fixed<< setprecision(7) << (float)ArraySum(arr,0,n)/n << endl ;
    return 0;
}