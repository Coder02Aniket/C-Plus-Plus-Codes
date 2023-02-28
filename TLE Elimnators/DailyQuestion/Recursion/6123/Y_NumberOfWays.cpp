#include<bits/stdc++.h>


using namespace std;

int recursiveWays(int start,int end){
    if(start ==end ){
        return 1;
    }else if(start > end){
        return 0 ;
    }
    return recursiveWays(start+1,end) + recursiveWays(start+2,end) + recursiveWays(start+3,end);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    int start , end ;
    cin >> start >> end ;
    cout << recursiveWays(start,end)<<endl;




    return 0;
}