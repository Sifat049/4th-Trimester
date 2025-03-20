#include <iostream>

using namespace std;


void insertionSort(int arr[],int n)
{
    for(int i =0; i< n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while( j>=0 && arr[j]>key)
        {
            arr[j+1]= arr[j];
            j--;

        }
        arr[j+1]=key;
    }
}
    void printArray(int arr[], int n)
    {
        cout << "INSERTIONSORT: ";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i] << " ";
        }
        cout << endl;
    }

    int main()
    {
        int n=5;
        int arr[]= {4,1,5,3,2};

        insertionSort(arr, n);
        printArray(arr, n);
        cout << "Hello world!" << endl;
        return 0;
    }
