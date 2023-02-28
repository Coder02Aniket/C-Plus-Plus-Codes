#include<iostream>
#include<vector>

using namespace std;

void result(vector<long long int>& ans){
    vector<long long int> result ;
    vector<long long int>::iterator start ; 
    vector<long long int>::iterator end ; 
    start = ans.begin() ;
    end   = ans.end()-1;
    while(start <= end){
        if(end == start){
            result.push_back(*(end)) ;
            break;
        }
        result.push_back(*(start));
        result.push_back(*(end)) ;
        start++,end--;

    }
    for(auto i :result)
        cout << i << " " ;
    cout << endl ;
    result.clear() , ans.clear() ;
}
int main(){
    vector<long long int > ans ; 
    int t , n , push = 0 ;
    cin >> t ;
    while(t--){
        cin >> n ;
        for (int m = 0 ; m < n ; m++)
        {
            cin >> push ;
            ans.push_back(push) ;

        }
        result(ans) ;
        ans.clear() ;
    }
    
    return 0;
}