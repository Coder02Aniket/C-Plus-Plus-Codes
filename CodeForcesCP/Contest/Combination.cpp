

#include <iostream>
using namespace std;
#define int long long 
int nCr(int n, int r)
{
    if(n < r){
        return 0 ;
    }
    if(r== 0 || n == r){
        return 1 ;
    }
    int a = nCr(n,r-1);
    int b= nCr(n-1,r-1);
    return a + b;
}

int32_t main()
{
    int x,y ;
    cin >> x >> y;
	cout << nCr(x, y); 
	return 0;
}

