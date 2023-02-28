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
    
    int n ;
    cin >> n ;
    multiset<int>ans ;
    vector<int> arr(n,0);
    for(int i = 0 ;i < n ; i++){
        cin >> arr[i];
    }
    multiset<int>::iterator it ;
    for(int i = 0 ; i < n ;i++){

       it = ans.upper_bound(arr[i]);
       if(it == ans.end()){
            ans.insert(arr[i]);
       }else{
            ans.erase(it);
            ans.insert(arr[i]);
       }
    }
    cout << ans.size() << endl ;



    return 0;
}