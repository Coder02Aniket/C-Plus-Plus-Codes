#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t ;
    cin >> t;
    while(t--){
        int a , val = 0;
        cin >> a ;
        string nums , ans = "";
        cin >> nums;
        val = nums[0] - 48 ; 
        for(int i = 1 ;i < a; i++){
 
            if(val > 0 ){
                ans.append("-");
                val = val - (nums[i] - 48 ) ;
            }
            else if(val < 0){
                ans.append("+");
                val = val + (nums[i] + 48 ) ;
            }
            else{
                ans.append("+");
                val = val + (nums[i] - 48 ) ;
            }
        }
        cout << ans << endl ;
    }




    return 0;
}