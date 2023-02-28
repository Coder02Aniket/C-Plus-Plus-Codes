#include <bits/stdc++.h>

using namespace std;
void WayTooLong(string& tc , int size ){
    if(size>10){
        tc.replace(1,size-2,to_string(size-2));
        
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t , size;

    string str;
    cin >> t;
    while (t--)
    {
        cin >> str ;
        size = str.size();
        WayTooLong(str,size);
        cout << str<< endl;
    }

    return 0;
}