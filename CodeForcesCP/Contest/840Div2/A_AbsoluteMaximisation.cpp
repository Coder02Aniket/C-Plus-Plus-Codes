#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int tc ;
    cin >> tc ;
    while(tc--){
        int numele , ansAND = -1 , ansOR = 0;
        vector<int>nums ;
        cin>> numele ;
        for(int i = 0 ; i < numele ; i++){
            int temp ;
            cin >> temp ;
            nums.push_back(temp);
        }
        for(int i = 0 ; i < numele ; i++){
            ansAND = ansAND & nums[i] ;
            ansOR = ansOR | nums[i];
        }
        cout << ansOR - ansAND << endl ;

    }




    return 0;
}