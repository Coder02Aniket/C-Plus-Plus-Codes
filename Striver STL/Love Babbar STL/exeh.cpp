#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ,N , stopper , no_of_opr = 0 ;
	cin >> t ;
	vector<string> v ;
	vector<string>::iterator i1 ;
	vector<string>::iterator i2 ;
	
	while(t--){
	    cin >> N ;
	    string s ;
	    cin >> s ;
	    
        cout << v[2] ;
        stopper = N /2 ;
        for (i1 =v.begin(),i2=v.end();(v.end()-i2) != (N/2);i1++,i2++){
            if ((*i1) != (*i2) ){
                no_of_opr = no_of_opr + 1 ;
            }
            
        }
	}
	cout <<no_of_opr << endl ;
	return 0;
}
