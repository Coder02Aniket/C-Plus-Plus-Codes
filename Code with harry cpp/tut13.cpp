#include<iostream>

using namespace std;

int main()
{
   int marks[4]={'a',45,65,43};
   
// using while loop
    int ch=1;
    if(ch==0){

        
        int i = 0;
        while(i < 4){
            cout<<"\nmarks["<<i<<"]:\t"<<marks[i];

            i =i +  1;
        }
        i = 0;

        // using do while loop
        do{
            cout<<"\nmarks["<<i<<"]:\t"<<marks[i];
            i++;
        }while(i<4);

    }
    int *p = marks;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;

   return 0;
}

