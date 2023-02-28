#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n ;
    cin>>n ;
    set<int>multiples ;

    for(int i = 1; i <= sqrt(n) ; i++){
        if(n % i == 0){
            multiples.insert(i);
            multiples.insert(n/i);

        }
    }
    for(int i : multiples){
        cout << i << endl; 
    }
    




    return 0;
}