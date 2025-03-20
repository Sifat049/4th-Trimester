#include <iostream>

using namespace std;

void containDuplicate(int nums[],int n)
{

       for(int i=0; i<n; i++){
        if(nums[i]==nums[i+1])
            return true;
       }


}

int main()
{
    int n;
    cin>>n;

    int nums[n];
    for(int i=0; i<n ; i++)
    {
        cin>> nums[i];
    }
    for(int i=0; i<n ; i++)
    {
        cout<< nums[i] <<" ";
    }

    return 0;
}
