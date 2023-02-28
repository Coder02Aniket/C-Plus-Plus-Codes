#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size_of_string = 0;
        cin >> size_of_string;
        string tc = "" , result = "";
        cin >> tc;
        int CntZero = 0, CntOne = 0;
        
        for (int i = 0 ; i < size_of_string ; i++)
        {
            if (tc[i] == '0')
            {
                CntZero++;
            }
            else
            {
                CntOne++;
            }

        }
        if(CntZero >= CntOne){
            while(CntZero--){
                result.push_back('0') ;
            }

        }
        else{
            while(CntOne--){
                result.push_back('1');
            }
        }
        cout << result << endl ;
        result.clear() ;
    }

    return 0;
}