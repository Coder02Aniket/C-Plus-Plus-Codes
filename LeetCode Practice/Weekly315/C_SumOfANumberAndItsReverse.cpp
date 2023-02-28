#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<string>



using namespace std;

bool sumOfNumberAndReverse(int num) {
    int reversed_num ;
    string num_str ;
    if(num == 0){
        return true ;
    }
    for(int i = 1 ; i <num ; i++){
        reversed_num = i ;
        if(i > 9 ){
            num_str = to_string(i);
            reverse(num_str.begin(),num_str.end());
            reversed_num = stoi(num_str);
        }
        if(reversed_num+i == num){
            return true ;
        }
    }
    return false ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    return 0;
}