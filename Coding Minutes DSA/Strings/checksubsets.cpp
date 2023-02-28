#include<iostream>
#include<string.h>
#include<vector>

using namespace std;


bool isSubsequence(string subset, string stringToCheck) {
    int i = 0 , j = 0 ;
    while(i < subset.length()  ){
        if(subset[i] == stringToCheck[j]){
            i++,j++;
        }
        else{
            if(j < stringToCheck.length()){
                j++;
            }
            else {
                return false ;
            }
        }
    }
    return true ;
}
int main(){
    cout << "Enter string :";
    string StringToCheck ;
    getline(cin , StringToCheck) ;
    cout <<"\nEnter string to check if it is subset of previous string : " ;
    string check_subset ;
    getline(cin , check_subset) ;
    bool value = isSubsequence(check_subset,StringToCheck) ;
    if(value){
        cout<<"\n Yes the given string is subset of previous string...." ;
        
    }
    else if(!value){
        cout  << "\n No the given string is not subset of first string ...." ;
    }
    
    return 0;
}