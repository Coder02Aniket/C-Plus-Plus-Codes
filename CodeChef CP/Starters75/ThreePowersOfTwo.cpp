#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc , n ;
	cin >> tc ;
	while(tc--){
	    int count = 0 , num= 0 , rem = 0;
	    cin >> n ;
	    string s ;
	    cin >> s ;
        for(int i = 0 ; i <  n  ; i++){
            if(s[i]=='1'){
                count++;
            }
        }
        if(count > 3){
            cout << "NO" << endl ;
        }else if(count==1 && n >=3 || count <= 3 && count !=1){
            cout << "YES" << endl; 
        }else{
            cout << "NO" << endl; 
        }

	}
	return 0;
}
