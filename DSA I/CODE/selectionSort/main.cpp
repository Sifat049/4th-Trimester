#include <iostream>

using namespace std;


void selectionSort(int arr[],int n)
{
     for(int i=0; i<=n-2; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<=n-1; j++)
        {
            if(arr[j] < arr[minIndex]){
                    minIndex=j;
            }
        }
         swap(arr[i],arr[minIndex]);
    }
}
    void printArray(int arr[], int n)
    {
        cout << "SELECTION SORT: ";
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

        selectionSort(arr, n);
        printArray(arr, n);
        cout << "Hello world!" << endl;
        return 0;
    }
