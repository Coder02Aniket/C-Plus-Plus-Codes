#include <bits/stdc++.h>

using namespace std;

void printLinerly(int start , int end )
{

    if (start > end)
    {
        return;
    }
    else
    {
        cout << start<< " ";
        printLinerly(start+1,end);
    }
}
void printLinerlyReversed(int start , int end)
{
    if (end < start)
    {
    }
    else
    {
        cout << end << " ";
        printLinerlyReversed(start, end-1);
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int a = 10;
    cout << "***********************Enter number to display*******************\n";

    // cin >> a;
    int cas = 1;
    cout << "Enter \"1\" to display number in order \nEnter \"2\" to display in reversed order \n";
    // cin >> cas ;
    switch (cas)
    {
    case 1:
        printLinerly(1,a);
        break;
    case 2:
        printLinerlyReversed(1,a);
        break;
    default:
        break;
    }
    // printLinerly(a);

    return 0;
}