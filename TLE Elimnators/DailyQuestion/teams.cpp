#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        // freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    int n , correct_ans_count = 0 , i = 0 , j= 0 , k = 0;
    cin >> n ;
    while(n--){
        cin >> i >> j>> k ;
        if(((i | j) & k) == 1 || (i & (j | k ) ) == 1 ){
            correct_ans_count = correct_ans_count + 1 ;
        }
    }
    cout << correct_ans_count << endl ;




    return 0;
}