#include <bits/stdc++.h>
using namespace std;

void solve(long long int x,long long int y,long long int z,long long int d, int& a, int& b)
{
    if((a+b)%2 == 0)
    {
       long long int t1 = (x+y)/2;
        long long int t2 = abs(x-y)/2;
        
        if( (t1 <=0 || t2 > 1e4) || (t2<=0 || t1 > 1e4))
        {
            a=-1;
            b=-1;
            return;
        }
        
        if((z==t1*t2 && d==t1/t2) || (d==t1*t2 && z==t1/t2))
        {
            a=t1;
            b=t2;
        }
        else{
            a=-1;
            b=-1;
        }
    }
    else {
        a=-1;
        b=-1;
    }
}

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	   long long int x,y,z,d;
	    cin >> x >> y >> z >> d ;
	    
	    int a=0,b=0;
	    solve(x,y,z,d,a,b);
	    
	    if(a==-1 && b==-1)
	    solve(x,z,y,d,a,b);
	    
	    if(a==-1 && b==-1)
	    solve(x,d,y,z,a,b);
	    
	    if(a==-1 && b==-1)
	    solve(y,z,x,d,a,b);
	    
	    if(a==-1 && b==-1)
	    solve(y,d,x,z,a,b);
	    
	    if(a==-1 && b==-1)
	    solve(z,d,x,y,a,b);
	    
	    cout<< a <<" "<<b <<"\n";
	}
	return 0;
}
