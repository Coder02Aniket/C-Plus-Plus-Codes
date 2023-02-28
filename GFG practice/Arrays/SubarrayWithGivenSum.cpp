#include<bits/stdc++.h>



using namespace std;

vector<int> Subarray(vector<int>arr,int exp_sum){
    vector<int>result ;
    int vs = arr.size() , ptr1 = 0 , ptr2 = 0 , temp_sum = 0 ; 
    while(ptr2 < arr.size()){

        if(temp_sum < exp_sum ){
            temp_sum += arr[ptr2++];
        }
        else if(temp_sum > exp_sum){
            ptr2--;
            temp_sum -= arr[ptr1++];
        }
        else{
            result.push_back(ptr1);
            result.push_back(ptr2);
            break ;
        }
    }

    return result ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int>arr = {10,20,30,40,50,60},arr1;
    arr1 = Subarray(arr,50);
    for(int i : arr1 ){
        cout << i << " " ;
    }
    
    return 0;
}