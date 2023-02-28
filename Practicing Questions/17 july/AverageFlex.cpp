#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int AvgFlex(vector<int>& num,int size ){
    sort( num.begin() , num.end() ) ;
    int result = size / 2 ;
    for(int i = result - 1 ; i >= 0 ; i--){
        if(num[i]== num[i+1]){
            result++;
        }
        else{
            break ;
        }
    }
    if(size % 2 == 1 ){
        result =  result + 1 ;
    }
    return result;
}

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n = 0;
        vector<int> result;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            result.push_back(num);
        }
        cout <<AvgFlex(result , n) <<endl;
        result.clear() ;
    }

    return 0;
}