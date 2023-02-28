#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<int>l1 , l2 = {10,20,30};
    list<int>::iterator lit = l2.begin() ;
next(lit,1);

    for(int i : l1){
        cout <<i << " ";
    }



    return 0;
}