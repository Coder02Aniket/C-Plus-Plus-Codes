#include<iostream>



using namespace std;
class student
{
    public:
    char name[70];
    int rno,age;
    void getdata();
};

void student::getdata()
{
    cout<<"enter name";
    cin >>name;
    cout<<"enter roll no";
    cin>>rno ;
    cout<<"enter age";
    cin>>age;
    cout<<age;
};

int main()
{  student s1;
   s1.getdata();
   return 0;
}