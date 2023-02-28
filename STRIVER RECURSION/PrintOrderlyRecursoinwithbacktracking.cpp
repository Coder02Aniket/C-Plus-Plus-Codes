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
        
        printLinerly(start , end - 1 );
        cout << end << " ";
    }
}
void printLinerlyReversed(int start , int end )
{
    if (start > end)
    {
    }
    else
    {
        printLinerlyReversed(start+1,end);
        cout << start << " ";
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int a = 0;
    cout << "***********************Enter number to display*******************\n";

    cin >> a;
    int cas = 0;
    cout << "Enter \"1\" to display number in order \nEnter \"2\" to display in reversed order \n";
    cin >> cas;
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