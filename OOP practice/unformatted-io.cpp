#include<iostream>


using namespace std;

int main()
{
   int count = 0;
   char c;
   cin.get(c);
   while(c!='\n');
   {
       cout<<c;
       cin.get(c);
       count++;
   };
    cout<<count;
    

   return 0;
}


