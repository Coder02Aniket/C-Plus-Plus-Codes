#include<bits/stdc++.h>
using namespace std;

bool GreaterSec(const pair<int,int> &a , const pair<int,int> &b){
    if(a.second == b.second){
        return a.first < b.first ;
    }
    return a.second < b.second ;
    
}
int countActivites(vector<pair<int,int> > activities){
    //Complete this method
    int n = activities.size() ;
    sort(activities.begin(),activities.end() , GreaterSec);
    // for(pair<int,int> i : activities){
    //     cout << "("<< i.first <<" " <<i.second << ")" << " " ;
    // }
    cout <<endl ;

    int count = 0;
    int start = 0 ;
    for(int i = 0 ; i < n; i++){
        if(activities[i].first >= start){
            start = activities[i].second;
            count++;
        }

    }
    
    return count ;
}
int main(){
    vector<pair<int,int>> vp{{7,9}, {0,10}, {4,5}, {8,9}, {4,10}, {5,7}};
    cout << countActivites(vp) ;

}