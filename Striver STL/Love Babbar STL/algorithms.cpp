#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int> v ;
    v.push_back(1) ;
    v.push_back(2) ;
    v.push_back(56) ;
    v.push_back(90);
    cout << "Finding -- > 90" << binary_search(v.begin(),v.end(),90) ;
    
    cout << "lower bound for 2-->>" << lower_bound(v.begin(),v.end(),2 ) - v.begin() << endl;
    cout << "upper_bound for 2-->>" << upper_bound(v.begin(),v.end(),2 ) - v.begin() << endl;

    // rotate
    // Left rotate - add 
    cout << "Before Rotate" << endl ;
    for(auto i : v){
        cout << i << " " ;
    }
    rotate(v.begin() , v.begin()+2 ,v.end()) ;
    cout << "\nLeft rotate middle the element 56" << endl ;
    for(auto i : v){
        cout << i << " " ;
    }
    // Right rotate - substract 
    rotate(v.begin(),v.begin()+v.size()-2 ,v.end()) ;
    cout << "\nAfter Rotate" << endl ;
    for(auto i : v){
        cout << i << " " ;
    }


    
    return 0;
}