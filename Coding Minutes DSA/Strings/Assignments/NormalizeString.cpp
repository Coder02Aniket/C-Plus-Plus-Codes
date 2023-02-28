#include<bits/stdc++.h>
using namespace std;



string normalize(const string &sentence) {
    string copy1 = sentence;
    //Make the changes in copy, and return it
    for(int i = 0 ; i < copy1.size() ; i++){
        if((copy1[i-1]== ' '|| i == 0) && (copy1[i] >= 65 || copy1[i] <= 90)){
            copy1[i] = toupper(copy1[i]);
        }
        else{
            copy1[i] = towlower(copy1[i]) ;
        }
    }
    
    

    return copy1;
}
int main(){
    cout << normalize("aniket shankar nangare") ;
}