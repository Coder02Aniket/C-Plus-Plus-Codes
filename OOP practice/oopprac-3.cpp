#include<iostream>
using namespace std;
class publication
{
    public:
    char title[20];
    double price;
    publication()
    {
        title-' ';
        price=0.0;
        
    }
    void publication_getdata(){
        cout<<"\nEnter the title:";
        cin>>title;
        cout<<"\nenter the price:";
        cin>>price;
        
    }
    void publication_display(){
        cout<<"\nTitle is :"<<title;
         cout<<"\nprice is :"<<price;
    }
};
class book:public publication
{
    public:
    int page_count;
    book()
    {
        page_count=0;
    }
void book_getdata()
{
    cout<<"\nEnter the page count:";
    cin>>page_count;
}
void book_display()
{
    cout<<page_count;
}
};
class tape:public  publication
{
    public:
    double playing_time_in_minutes;
    tape(){
        playing_time_in_minutes=0.0;
    };

    void tape_getdata(){
        cout<<"\nEnter the playing_time_in_minutes: ";
        cin>>playing_time_in_minutes;
    }
    void tape_display(){

        cout<<playing_time_in_minutes;
}

};
int main()
{
    book b;
    cout<<"Enter the details of the book:";
    b.publication_getdata();
    b.book_getdata();
    b.publication_display();
    b.book_display();
    tape t;
    cout<<"\nEnter the details of audio cassete:";
    t.publication_getdata();
    t.tape_getdata();
    t.publication_display();
    t.tape_display();
    return 0;
}