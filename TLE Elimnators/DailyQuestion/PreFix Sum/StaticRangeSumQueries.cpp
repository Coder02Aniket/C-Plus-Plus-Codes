/*Given an array of n
 integers, your task is to process q
 queries of the form: what is the sum of values in range [a,b]
?

Input

The first input line has two integers n
 and q
: the number of values and queries.

The second line has n
 integers x1,x2,…,xn
: the array values.

Finally, there are q
 lines describing the queries. Each line has two integers a
 and b
: what is the sum of values in range [a,b]
?*/
#include<bits/stdc++.h>


using namespace std;

#define int  long long
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    //     freopen("input.txt","r", stdin);

    //     // freopen("output.txt","w", stdout);

    //     freopen("errors.txt","w",stderr);

    // #endif
    
    int n , q , a , b ;
    cin >> n >> q;
    vector<int>v(n,0),pre(n,0);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        //creating prefix array 
        if(i == 0){
            pre[i] = v[i];
        }else{
            pre[i] = pre[i-1] + v[i];
        }

    }

    for(int i =0 ; i < q ; i++){
        cin >> a >> b ;
        // decreasing from last index - 1 behind first index
        if(a > 1)
            cout << pre[b-1] - pre[a-2] << endl ;
        else{
            cout << pre[b-1] << endl ;
        }
    }

    // TC - O(N) , S(C) - O(N)


    return 0;
}