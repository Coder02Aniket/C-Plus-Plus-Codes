#include<bits/stdc++.h>


using namespace std;

bool cmp(pair<int,int>& p1, pair<int,int>& p2){
    if(p1.second < p2.second){
        return true ;
    }
    return false ;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    vector<pair<int,int>> v ={{1,3},{3,1},{4,2},{9,6}};
    sort(v.begin(),v.end(),cmp) ;
    for(pair<int,int> i : v){
        cout <<"{ " << i.first << " " << i.second << " }" ;
    }




    return 0;
}