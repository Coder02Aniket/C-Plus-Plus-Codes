#include<iostream>

using namespace std;
//also called as static polymorphism

void info(char name[]="ABC",int age= 0,int country_code=91)
{
   cout<<"name:\n"<<name<<"age:\n"<<age<<"Countrycode:\n"<<country_code;
}



int main()
{
   char name[100];
   int age;
   int country_code;
   cout<<"enter name:\n";
   cin>>name;
   
   cout<<"enter age:\n";
   cin>>age;
   cout<<"enter country code:\n";
   cin>>country_code;
   info(name, age,country_code);

   
         
   return 0;
}