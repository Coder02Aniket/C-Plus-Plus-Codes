#include<iostream>
#include<math.h>

using namespace std;
int calc(int x = 1,int y =10){
    return (pow(x,y));
}
int main()
{

    // int i = 100;
    // int &j = i;
    // int &k = j;

    // k++;
    // cout<<j<<endl;
    // cout<<i;
    cout<<calc(10,1)<<endl;
    cout<<calc();
    
   return 0;
}