// creating and writing a file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fobj;
    fobj.open("output.txt");
    fobj<<"writing test ok!!!\n";
    fobj.close();
    
    
    return 0;
}