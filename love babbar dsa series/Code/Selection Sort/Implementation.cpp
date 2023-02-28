#include<iostream>
#include<vector> 

using namespace std;

void selectionSort(vector<int>&) ;
int main(){
    
    vector<int>result = {56,12,578,23,98,123,876,324,6564,90} ;
    selectionSort(result) ;
    for(int i : result){
        cout << i << " " ;
    }
    return 0;
} 
void selectionSort(vector<int>& arr)
{   
    
    int n = arr.size() ;
    int i , j ;
    for(i = 0 ; i < n ; i++){
        int minIndex =  i;
        for(j = i + 1 ; j < n ; j++){
            if ( arr[j] < arr[minIndex] ){
                minIndex = j ; 
            }
        }
        swap(arr[minIndex],arr[i]) ;
    }



}