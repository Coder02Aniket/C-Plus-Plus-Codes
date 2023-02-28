#include<iostream>

using namespace std;
/*** inline function and while loop***/

inline int Add(int x , int y){
    return x + y;
}

int main(){
    cout <<" addition of values "<<Add(20,12);
    int n ;
    cin>> n;

        do{

            cout<<"hello world"<<endl;
            if ( n % 2 == 1){

            cout<<"loop  iterated  times"<< n<<endl;
            }
            else{


                cout<<"loop  iterated" <<n<<"times"<<endl;
            }
        
            n = n + 1;
        }while(n>11);

     return 0;
}