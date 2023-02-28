#include<iostream>


using namespace std;
int sum_recursive(int);

int main(){
    int n  = 0,sum = 0;
    int dest;
    cout<<"enter number till additon :";
    cin >> dest;

    //sum using while loop
    /**while(n <= dest ){
        sum += n;
        n += 1;

    }**/
    cout<<"calculating......."<<"\nsum is: "<<sum_recursive(dest);    
    return 0;
}
int sum_recursive(int a){
    //sum using recursive function call
    if(a>0){  
    return a + sum_recursive(a - 1);
    }
    return 0;
}