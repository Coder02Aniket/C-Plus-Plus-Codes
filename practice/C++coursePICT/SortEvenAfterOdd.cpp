#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int Sample[], int n) {
	    // code here
        int Allocator = 0 , count = 0 ;
        sort(Sample, Sample+n) ;
        for(int i = 0 ; i < n ; i++){
            if(Sample[i]%2 ==0 ){
                count++;
                swap(Sample[Allocator++],Sample[i]) ;
            }
    
        }
        sort(Sample+count,Sample+n) ;    
            
	}
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> Sample = {2,3,45,67,6,75,667,12,145 } ;
    SortEvenAferOdd(Sample) ;
    for(int i : Sample ){
        cout << i << " " ;
    }
    return 0;
}