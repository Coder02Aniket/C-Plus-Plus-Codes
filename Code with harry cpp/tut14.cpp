#include<iostream>

using namespace std;


typedef  struct employee
{
    int eId; 
    char favChar; 
    float salary; 
}ep;
enum aniket1{name ,roll , division};
 int main(){
     struct employee harry;//struct employee if typedef not used
     ep aniket;//due to typedef 
     aniket.eId = 2;
     aniket.favChar='t';
     aniket.salary = 205874102.098;

    cout<<name<<endl;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 120000000;
     cout<<"The value is "<<harry.eId<<endl; 
     cout<<"The value is "<<aniket.eId<<endl; 
     cout<<"The value is "<<harry.favChar<<endl; 
     cout<<"The value is "<<aniket.salary<<endl; 
     cout<<"The value is "<<harry.salary<<endl; 
     cout<<"The value is "<<aniket.favChar<<endl; 
     return 0;
};
