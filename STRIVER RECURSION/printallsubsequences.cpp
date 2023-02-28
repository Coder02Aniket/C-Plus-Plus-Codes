#include<bits/stdc++.h>


using namespace std;
void printAllSubsequences(int ind , vector<int>&ds , int arr[] , int n ){
    if(ind == n ){
        for(auto it : ds){
            cout << it << " ";
        }
        if(ds.size() == 0){
            cout << "{}" ;
        }
        cout << endl; 
        return ; 
    }
    // take or pick the condition
    ds.push_back(arr[ind]);
    printAllSubsequences(ind+1,ds,arr,n);
    ds.pop_back();

    // not pick condition
    printAllSubsequences(ind + 1 , ds, arr, n );

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>ds  ;
    int arr[5] = {1,2,3,4,5} , n = 5 ;
    printAllSubsequences(0,ds,arr,n);
    return 0;
}