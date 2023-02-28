#include<bits/stdc++.h>


using namespace std;

void mahiti_sang(vector<int>& tasters , multiset<int>& tea , int size ){
    vector<int>drinked_tea(size,0);
    int prefix_sum = 0 ;
    for(int i = 0 ; i < size ;i++){
        
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stderr);

    //#endif
    int tc , n , provider;
    cin >> tc ;
    while(tc--){
        cin >> n ;
        vector<int>tasters ;
        multiset<int>tea ;
        for(int i= 0 ; i < n ;i++){
            cin >>provider ;
            tea.insert(provider);
        }
        for(int i = 0 ; i< n ;i++){
            cin >> provider ;
            tasters.push_back(provider);
        }
        mahiti_sang(tasters,tea,tasters.size());
    }




    return 0;
}