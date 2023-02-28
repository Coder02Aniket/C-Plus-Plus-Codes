#include<iostream>

using namespace std;
void cout1();//function prototype
int pow(int,float);//function prototype
int main()
{
    int m = 5;
    float n = 7.8;
    // cout1();
    float g =pow(m,n);
    cout<<"\n"<<g;

    
    
    
}
// void cout1(){
//     char b[50];
//     cin>>b;
//     cout<<b;
// };
int pow(int a,float b){
    float n = 0;
    float p = 0;
    for(float i = 0;i<=b;i++){
        p =(float) a *i;
        n =(float) p + n;
        if (i == b- 1){
            for(float i = 0;i<=b;i=0.1 + i){

                p =(float) a *i;
                n =(float) p + n; 
            };
        };

    };
    n = n - 1;
    return n;
}
// above code doesn't work(for power ) but illustrating  function
// prototypes  and declaration