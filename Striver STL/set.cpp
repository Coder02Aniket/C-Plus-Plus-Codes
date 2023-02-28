#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;


int main(){
   
    set<int>st =  {2,5,2,1,5};
    int n = 1 , y;
    // cin >> n ;
    // for(int i = 0 ; i < n  ; i++ ){ 
        
    //     cin >> y ;
    //     st.insert(y) ;
    // }
    // Erase functionality 
    st.erase(st.begin()) ;
    st.erase(5) ;
    //Find 
    st.find(1);
    // for(auto it = st.begin() ; it != st.end() ; it++){
    //     cout << *it  << endl;
    // }
    // Unodrdered set 
    unordered_set<int> set ;
    // Multiset 
    multiset <int> ms ;
    ms.insert(1);
    ms = { 2,3,4,4,5,6,7}  ;
    for(auto it : ms){
        cout << it << endl ;
    }


    return 0;
}