#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector <int> test = {0,2,3 ,2 ,1} ;
    for(int i : test){
        // cout<<test[i] ;//Works likes i= test[i] so , it becomes test[test[i]]🤣
        cout << i;
    }

    
    return 0;
}   