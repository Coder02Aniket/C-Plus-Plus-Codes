#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in;
    char Data[80];
    in.open("sample.dat");
    if (!in){
        cerr<<"sample.dat couldn't be opened!!\n";
        exit(1);
    }
    cout<<"the contents of file are:"<<endl;
    while(in){
        in.getline(Data,80);
        cout<<"\n"<<Data;

    };
    in.close();



    
    
    return 0;
}