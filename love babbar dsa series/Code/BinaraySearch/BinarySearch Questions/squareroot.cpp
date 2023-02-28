#include<iostream>


using namespace std;
int sqrtN(long long int N)
{
    // Write your code here.
    unsigned int start = 0 , end = N - 1 , mid, ans;
    while(start <= end){
        mid = start + (end-start) / 2 ;
        if (mid*mid == N){
            return mid ;
        }
        else if(mid*mid > N){
            end = mid - 1 ;

        }
        else{
            ans = mid ; 
            start = mid + 1 ;
        }
    }
    return ans ; 
}

int main(){
    cout << "Enter Number to calculate square root of : " << endl;
    long long int x ;
    cin >> x ;
    cout << "square root is : " << sqrtN(x) ;

    
    return 0;
}