#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

int Max_Opn_ToMakeEqual(vector<int>&A,vector<int>&B,int n){
    int count = 0 , Aone_count = 0 , Azero_count = 0 , B_one = 0 , Bzero = 0 ,intermid = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(A[i]== 0){
            Azero_count++;
        }else{
            Aone_count++;
        };
        if(B[i]==0){
            Bzero++;
        }else{
            B_one++;
        }
    }
    count = abs(Aone_count-B_one);

    for(int i = 0 ; i < n ; i ++){
        if(A[i]!=B[i]){
            intermid++;
        }
    } 
    if(intermid>count){
        count++;
    }


    return count ; 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int>A,B ;

    int t , n ,tp;
    cin >> t ;
    while(t--){
        cin >> n ;
        for(int i = 0 ; i < (2 * n); i ++){

            if(i < n){
                cin >> tp;
                A.push_back(tp);
            }
            else{
                cin >> tp;
                B.push_back(tp);
            } 
        }
        cout << Max_Opn_ToMakeEqual(A,B,n) << endl;
        A.clear() ;
        B.clear() ; 
    }
    
    return 0;
}