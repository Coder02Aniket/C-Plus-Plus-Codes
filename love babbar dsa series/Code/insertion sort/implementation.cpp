#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(int vec[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        int j = i - 1 ;
        int temp = vec[i] ;
        for (; j >= 0; j--)
        {
            if (vec[j] > temp)
            {
                // shift
                vec[j + 1] = vec[j];
            }
            else
            {
                break;
            }
        }
        vec[j+1] = temp ;
    }
}

int main()
{
    cout << "***********INSERTION SORT******************\n";
    cout << "enter size of array to sort:\t";
    int size;
    cin >> size;
    int arr[100] ;
    int i = 0;
    while (i != size)
    {
        cin >> arr[i];
        i++;
    }
    InsertionSort(arr, size);

    for(int i  = 0 ;i < size ; i++){
        cout << arr[i] << " , " ;
    }

    return 0;
}