#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    int n , k , count = 0  ;
    cin >> n >> k ;
    vector<int>arr(n,0);
    for(int i = 0 ; i < n ;i++){
        cin>> arr[i];
    }
    for(int i:arr){
        if(i>=arr[k-1]&& i > 0){
            count++;
        }
    }
    cout << count << endl; 




    return 0;
}