#include<iostream>

using namespace std;

int main(){

    /*loops in C++
    three types of loops in c++:
       1.For Loop
       2.while loop
       3.do-while Loop
       */
      /*for loop in C++*/

    //   syntax for 'for' loop
    // for (initialization;condition;updation)
    //     {
    //         loop code(c++ code);
    //     }
    //   for (int i = 0; i < 40; i++)
    //   {
    //       cout<<i<<endl;
    //   }
      

    //  while Loop
    // syntax:
    // while(condition):
    // {
    //     C++ statments
    // }
    // printing 1 to 40 using while loop
    // int m= 1;
    // while (m < 41) {
    //     cout<<m<<endl;
    //     m++;
    // }    

    
    // infinite while loop
    // while ( true){
    //     cout<<"Aniket Nangare"<<endl;
    // }
    for (int i = 10;i>=1;i){
            
            cout<<"6 *"<<i<<":"<<i*6<<endl;
            --i;
    }
    return 0;       
}