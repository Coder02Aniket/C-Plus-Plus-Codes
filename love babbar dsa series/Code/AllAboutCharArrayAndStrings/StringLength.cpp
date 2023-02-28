#include<iostream>


using namespace std;

int length_of_str(char str[] ){
    int i = 0 ;
    while(str[i] != '\0'){
        i++;
    }
    return i ;
}
int main(){
    char name[20];
    cin >> name ; // cin terminates with sapce 
    cout << "\n Length of string is:\t "<<length_of_str(name) ;
    return 0;
}