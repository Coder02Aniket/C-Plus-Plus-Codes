#include<bits/stdc++.h>



using namespace std;

class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        return event1[0] <= event2[1] && event2[1] <= event1[0] ;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution* ob ;
    vector<string>event1 ={"01:15","02:00"} , event2 = {"02:00","03:00"};
    cout << ob->haveConflict(event1,event2)  << endl ;

    
    return 0;
}