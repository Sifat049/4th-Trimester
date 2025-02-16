#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int low, int high, int key)
{
    while(low <=high)
    {
        int mid=low + (high - low) / 2;
        if(arr[mid==key])
        return mid;

        if(arr[mid]< key)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;

}
int main(){

    int arr[]={2,3,4,5,6,7,78,6,5,4};
    int key=2;
    int n= sizeof(arr)/ sizeof(arr[0]);
    int res= binarysearch(arr,0,n-1,key);
    if (res == -1) 
    cout << "Element is not present in array";
    else
     cout << "Element is present at index " << res;
   

    return 0;
}