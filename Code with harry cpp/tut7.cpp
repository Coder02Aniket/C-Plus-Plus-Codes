//reference variables and typecasting

#include<iostream>

using namespace std;
int c = 45;
int main(){
    // /************built in data types*************/
    int a,b,c;
    cout <<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    c = a + b;
    cout<<"the sum is :"<<c<<endl;
    cout<<"the global c is :"<<::c;


    // /************float,doubles,and long double Litrerals*************/
    float d = 34.4F;
    long double e =34.4L; 
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl; 
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout <<"the value of d is"<<d<<endl<<"the value of e is "<<e;


    // *************reference variabales************
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    // *************Typecasting**************
    int m = 45;
    float n = 45.46;
    cout<<"the value of m is "<<(float)m<<endl;
    cout<<"the value of m is "<<float(m)<<endl;

    cout<<"the value of n is "<<(int)n<<endl;
    cout<<"the value of n is "<<int(n)<<endl;

    int o = int (n);

    cout <<"the expression is "<<m + n<<endl;
    cout <<"the expression is "<<m + int(n)<<endl;
    cout <<"the expression is "<<m +(int)n<<endl;


    return 0;
}


