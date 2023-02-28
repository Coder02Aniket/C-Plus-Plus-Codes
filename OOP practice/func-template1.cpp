#include<iostream>

using namespace std;


template<class X>
X add(X  m ,X n , X o ){
    return m + n + o;
};
void fun(int a,int b,int c,float d,float e,float f){
    cout<<"\naddition of integers:\t";
    int m,n;
    m=add(a ,b ,c);
    cout<<m;
    cout<<"\naddition of float:\t";

    n=add(d,e,f);
    cout<<n;



}
int main(){
    fun(10,20,30,10.5,20.5,30.5);
    return 0;
}



