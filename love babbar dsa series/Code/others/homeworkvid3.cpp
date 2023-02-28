#include<iostream>
#include<random>
#include<time.h>

/*******Generates random number between 0 to 122 and displays its ascii equivlent**********/
using namespace std;


int main(){
    int t = 8;
    srand(time(0));
    while(t){

    char ch;
    ch = (rand()%122);
    cout<<endl;
    if (97 <= ch && ch <= 122){
        cout<<"*******lowercase Characters*******\n";

    }
    else if (65 <= ch  && ch<= 90){
        cout<<"*******Uppercase Characters*******\n";

    }
    else if (48 <= ch && ch <= 57){
        cout<<"*******Decimal Numbers*******\n";

    }
    cout<<"number is:\t"<<(int)ch<<"\nthe character is: "<<ch;
    t--;
    
    }    
    return 0;
}