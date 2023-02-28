#include<iostream>


using namespace std;

class test{
public:
    int  a = 0;
    test(){
    
        int b = 0;
        if (a!= 1){
            cout<<"checking memory!!";
        }

    }
};
int main(){
    test T;
    cout<<sizeof(T);
    
    return 0;
}