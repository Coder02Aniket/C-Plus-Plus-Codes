#include<vector>
#include <iostream>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr){
    
    //Create an output Array
    int n = arr.size();
    
    vector<int> output(n,1);
     
    
    
    for(int i = 0 ; i < n ; i++){
        int product = 1;
        for(int j = 0  ; j < n; j++ ){
            if (i == j ){
                continue ;
            }
            product = product * arr[j] ;
            
        }
        output[i] = product;
    }
    //update the output array and return
    //complete the code
    
    
    
    return output;
}
int main(){
    for (int i: productArray({1, 2, 3, 4, 5}))
        cout << i << endl;

}