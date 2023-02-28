#include<bits/stdc++.h>
 
 
using namespace std;
 
// vector<int>combinations = vector<int>(); 
// void RecursiveDoraemon(string& received, int value = 0,  int ind = 0){
//     if(ind == received.length()){
//         combinations.push_back(value);
        
//         return ;
//     }
//     if(received[ind]!='?'){
//         if(received[ind]=='+'){
//             value = value + 1; 
//         }else{
//             value = value - 1;
//         }
//         RecursiveDoraemon(received, value ,ind+1);
//     }else{
//         RecursiveDoraemon(received,value+1,ind+1);
//         RecursiveDoraemon(received,value-1,ind+1);
//     }
 
// }
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(NULL);
 
    //#ifndef ONLINE_JUDGE
 
        // freopen("input.txt","r", stdin);
 
        //freopen("output.txt","w", stdout);
 
        //freopen("errors.txt","w",stdout);
 
    //#endif
    string orignal , received ;
    cin >> orignal >> received ;
    int orignal_value = 0 , correct_ans_count = 0 , no_of_questions = 0 ;
    vector<int>combinations = vector<int>(); 
    for(int i = 0 ; i < orignal.size() ;i++){
        if(orignal[i]=='+'){
            orignal_value = orignal_value + 1 ;
        }else{
            orignal_value = orignal_value - 1 ;
        }
 
        if(received[i]=='?'){
            no_of_questions = no_of_questions + 1; 
        }
    }
    function<void(int,int)> LambdaDoremon = [&](int value, int ind){
        if(ind == received.size()){
            combinations.push_back(value);
            return ;
        }

        if(received[ind]!='?'){
            value += (received[ind] == '+')? 1 : -1 ;
            LambdaDoremon(value,ind+1);
        }else{
            LambdaDoremon(value+1,ind+1);
            LambdaDoremon(value-1,ind+1);
        }
        

    };
    LambdaDoremon(0,0);
    for(int i : combinations){
        if(i == orignal_value){
            correct_ans_count ++ ;
        }
    }
    cout << fixed << setprecision(12) << (double)(correct_ans_count/powl(2,no_of_questions)) << endl ;
 
 
 
 
    return 0;
}