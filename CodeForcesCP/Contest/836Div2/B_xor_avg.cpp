#include<bits/stdc++.h>


using namespace std;


int main(){
	// ios::sync_with_stdio(0);
	// cin.tie(0);
// Thanks to karan mashru
	int t , num ;
	cin >> t;
	while(t--){
		cin >> num ;
		if(num & 1){
			for(int i = 0 ; i < num ; i++){
				cout << num << " ";
			}
			cout << endl ;
		}
		else{
			cout << 1 << " " << 3 << " ";
			for(int i = 0  ; i < num -2 ; i++){
				cout << 2<< " ";
			}
			cout << endl ;
		}
	}






	return 0;
}