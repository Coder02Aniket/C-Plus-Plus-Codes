#include<bits/stdc++.h>


using namespace std;

void SubsequenceHavinSumK(int ind,vector<int>&seq , int s , int sum , int arr[],int n ){
    if(ind == n){
        if(s== sum){
            for(int i : seq){
                cout << i << ' ';
            }
            cout << endl;
        }
        return ;
    }
    seq.push_back(arr[ind]);
    s += arr[ind];
    SubsequenceHavinSumK(ind+1,seq,s,sum,arr,n);

    s-=arr[ind];
    seq.pop_back();

    SubsequenceHavinSumK(ind+1,seq,s,sum,arr,n);

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    




    return 0;
}