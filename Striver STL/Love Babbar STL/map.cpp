#include<iostream>

#include<map>
using namespace std;


int main(){
    map<int,string> m ;
    m[1] = "Babbar" ;
    m[2] = "Kumar" ;
    m[3] = "Love " ;
    m.insert({5,"bheem"}) ;
    m.insert({4,"aniket"}) ;
    cout <<"Before Erase :" << endl ;
    for(auto i : m){
        cout << i.first << "  " << i.second << endl;


    }
    cout << "finding - > 13 :" <<m.count(-13) << endl ;
    cout << endl <<endl ;
    m.erase(4) ;
    for (auto i : m) {
        cout << i.first <<" "<< i.second << endl;

    }
    cout<<"\n\n" ;
    auto it = m.find(5) ;
    for(auto  i = it ; i != m.end() ; i++){
        cout << (*i).first <<"  "<<(*i).second<<endl ;
    }
    return 0;
}