#include<bits/stdc++.h>


using namespace std;
//striver recursion playlist 

//parameterized recursion

//using two pointers 
// void  reversearr(int* arr,int first , int last ){// int* and int * are same int* can be written
//     if(first > last){
//         // return ;
//         // return arr ;
//     }else{
//         swap(arr[first],arr[last]);
//         reversearr(arr,first+1,last-1);
//     }
// }


//using only one pointers
void  reversearr(int* arr,int first , int size ){// int* and int * are same int* can be written
    if(first >= size / 2){
        // return ;
        // return arr ;
    }else{
        swap(arr[first],arr[size-first-1]);
        reversearr(arr,first+1,size);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};
    cout << "reversing the given array..................\n";

    // int* result  = reversearr(arr,0,10);
    reversearr(arr,0,11);
    for(int i = 0 ; i < 11 ; i++){
        // cout << *(result++) << endl ; if function returns int* or int * 
        cout << arr[i] << " ";// you can't use array variable as pointer and increment and decrement it 
    }

    // for(int i : arr){
    //     cout << i << " ";
    // }

    return 0;
}