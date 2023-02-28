#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    sort(a.begin(),a.end());
    sort(b.begin(),b.end()) ;
    int m = 0 , n= 0 ;
    int a_size = a.size() , b_size = b.size() ;
    pair<int,int> mde ;
    int result = INT_MAX ;
    while(m < a_size && n < b_size){
        if(abs(a[m]-b[n]) < result ){
            result = abs(a[m]-b[n]);
            mde = make_pair(a[m],b[n]);
        }
        if(a[m]<b[n]){
            m++;
        }
        else{
            n++;
        }
    
    }
    return mde ;
}