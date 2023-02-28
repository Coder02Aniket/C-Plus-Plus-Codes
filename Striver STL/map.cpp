#include<iostream>
#include<unordered_map>
#include<map> 


using namespace std;


int main(){
    map <string  , int > mpp ;
    mpp["raj"] = 27 ;
    mpp["hima"] = 31 ;
    mpp["sandeep"] = 67 ;
    mpp["tank"]= 89 ;
    // overwrites
    mpp["raj"] = 29 ;
    mpp.emplace("raj", 45) ;
    mpp.erase("raj") ;
    for(auto it : mpp){
        cout << it.first <<" "<< it.second << endl;
    }
    for(auto it = mpp.begin() ; it!= mpp.end(); it++){
        cout << it -> first << " " << it -> second << endl; 
    }
    

    // Unordered_map   
    unordered_map<int,int> mpp1;

    // pair class
    cout << endl;
    pair < int , int > pr = {1,2} ;
    pair<pair<int,int>,int> pr1 ={{1,2},2} ;
    // To Access 2
    cout << pr1.first.second << endl ;
    pair<pair<int,int>,pair<int,int>> pr2 = {{1,2},{3,4}} ;
    // pr2.second.second -> 4
    // pr.second.first  -> 3 

    // vector<pair<int,int>> vec ;
    // set<pair<int , int >> st ;
    // map<pair<int , int >,int > mpp ;
    // MultiMap - multiple queque , Sorted  
    multimap<string , int > mpp;
    mpp.emplace("raj",2) ;

    return 0;
}