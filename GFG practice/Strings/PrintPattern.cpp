#include<iostream>
#include<vector>

using namespace std;

vector<string> PrintPattern(int n ){
    vector<string>result;
    string m = "";
    int stop = n *( n + 1) ;
    for(int i = 1 ; i <= stop;i++){
         
        if(i <= n || i >= stop-n+1){
            m.append(to_string(i)+"*") ;
        }
        
    }
    cout << m ;
}
int main(){
    vector<string>v(PrintPattern(3));
    
    
    return 0;
}