#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int tc ;
	cin >> tc ;
	int count = 0 ;
    int len_of_string = 0 ;
    char substing[10000] ;
	while(tc--){
	    count = 0 ;
        cin >> len_of_string ;
        cin >> substing ;
        for(int i = 0 ; i < len_of_string; i++){
            if(substing[i] == '0' && substing[i+1]== '0'){
                for (int j = i+1; j < len_of_string; j++){
                    if (substing[j] == '1'){
                        swap(substing[i+1],substing[j]);
                    }
                    
                }
            }
            else if(substing[i] =='1' && substing[i+1] == '1'){
                for (int j = i+1; j < len_of_string; j++){
                    if (substing[j] == '0') {
                        swap(substing[i],substing[j]);
                    }
                }
            }
            
        }
        for(int i = 0 ; i <= len_of_string; i++){
            
            if(substing[i]== '0' && substing[i+1]== '1'){
                count += 1 ;
            }
            
	    }
	    cout << count << endl;
	}
	
	
	return 0;
}
