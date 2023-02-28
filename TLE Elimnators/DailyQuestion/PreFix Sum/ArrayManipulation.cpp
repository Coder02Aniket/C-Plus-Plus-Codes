/*Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

Example
n = 10 
arr = {{1,5,3},{4,8,7},{6,9,1}}

Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is  after all operations are performed*/
#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

long long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long long>adder(n,0);

    
    long long a , b , k ;
    
    //AAM IDEA
    // for(vector<int>q : queries){
    //     a = q[0] , b = q[1] , k = q[2] ;
    //     for(int i = a-1 ; i < b ; i++ ){
    //         adder[i] = adder[i] + k ;
    //     }
    // }
    // return *max_element(adder.begin(),adder.end());

    // MENTOS 
    for(vector<int>q : queries){
        a  = q[0], b = q[1], k = q[2];
        adder[a-1] = adder[a-1] + k ;
        if(b < n){
            adder[b] = adder[b] - k ;
        }
    }
    for(int i = 1 ; i < n ; i++){
        adder[i]+= adder[i-1];
    }
    return  *max_element(adder.begin(),adder.end());
}

int32_t main(){


    // #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);

    //     freopen("output.txt","w", stdout);

    //     freopen("errors.txt","w",stderr);

    // #endif
    int n , q ,num;
    cin >> n >> q ;

    vector<vector<int>>queries(q,vector<int>(3,0)) ;
    for(int i = 0 ; i < q ;i++){
        for(int j= 0 ;j < 3 ; j++){
            cin >> num ;
            queries[i][j] = num; 
            

        }
    }   
    cout << arrayManipulation(n,queries) << endl ;
    
    return 0 ;
}
    