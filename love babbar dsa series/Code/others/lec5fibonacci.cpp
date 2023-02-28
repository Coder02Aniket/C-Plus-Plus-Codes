#include<iostream>


using namespace std;

int fibonacci(int n){
    
    if(n<2)
        return n;
    return fibonacci(n-1) + fibonacci(n-2); 
    
}
int main(){
    cout<<"enter number to calculate the series till postion ";
    int num;
    cout<<"calculating till  position "<<num<<endl;
    
    cin >> num;

    for(int i = 0 ;i < num ; i++){
        cout<<fibonacci(i)<<" , ";

    }
    
    return 0;
}