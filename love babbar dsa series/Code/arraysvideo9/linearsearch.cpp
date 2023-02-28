#include<iostream>


using namespace std;

class linearsearch{
public :
    int i ;
    bool Lsearch(int arr[] , int eletoFind , int size){
        for(i =0 ; i < size ; i++){
            if (eletoFind == arr[i])
                return true ;
        
        }
        return false;
    }
};
int main(){
    //input 
    int ele , eletofind;
    int b[5] ;
    cout<<"enter elements";
    for(int i = 0 ; i < 5 ; i++){ 
        cin>>ele ;
        b[i] = ele ;
    }
    cout<<"Now enter element to find " ;
    cin >> eletofind ;
    linearsearch a ;
    if (a.Lsearch(b, eletofind,(sizeof(b)/4))==true)
        cout<<"Element found at index : "<<a.i;
    else
        cout<<"element not found !!!" ;
    return 0;
}