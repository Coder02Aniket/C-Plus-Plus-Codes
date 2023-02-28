#include<bits/stdc++.h>


using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        // freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    
    int tc , n ,flag ;
    cin >> tc ;
    while(tc--){
        cin >> n;
        flag = 0 ;
        vector<bool>regis((n+1),false); // checks if the number is present in the permutaion / array 
        vector<int>given_arr(n,0),remaining_from_arr,remaining_from_permutation;
        for(int i = 0 ; i < n ;i++){
            cin >> given_arr[i];
            if(given_arr[i]<=n){
                if(regis[given_arr[i]]  == false){
                    regis[given_arr[i]] = true ;
                }else{
                    
                    remaining_from_arr.push_back(given_arr[i]);
                }
            }else{
                remaining_from_arr.push_back(given_arr[i]);
            }
        }
        for(int i = 1 ; i <= n ; i++){
            if(!regis[i]){
                remaining_from_permutation.push_back(i);
                
            }

        }
        sort(remaining_from_arr.begin(),remaining_from_arr.end());
        
        
        for(int i = 0 ;i < remaining_from_permutation.size() ; i++){
            if(2*remaining_from_permutation[i]>=remaining_from_arr[i]){
                flag = 1 ;
                break ;
            }
        }
        if(flag > 0){
            cout << "-1\n" ;
        }else{
            cout << remaining_from_permutation.size() << endl ;
        }
        
        // tc - O(nlogn}
    }



    return 0;
}