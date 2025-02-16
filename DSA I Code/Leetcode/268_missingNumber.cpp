#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int num[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(num[j]>num[j+1])
                swap(num[j],num[j+1]);
        }
    }


}
bool checkIndexMatch(vector<int>&& num)
{
    for(int i = 0; i < num.size(); i++)
    {
        if (num[i] != i)
        {
            return false;
        }
        return true;
    }
}

void print(int num[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< num[i] <<" ";

    }
    cout<<endl;

}


int main()
{

    int n;
    cout<<"INPUT:";
    cin>> n;
    int num[n];
    for(int i=0; i<n; i++)
    {
        cin>> num[i];
    }

    /*for(int i=0; i<n; i++)
    {
        cout<< num[i];
    }*/
    bubbleSort(num, n);
    print(num, n);

    if(checkIndexMatch(num))
    {
        cout << "All indices match their values!" << endl;
    }
    else
    {
        cout << "Some indices do not match their values!" << endl;
    }
    return 0;
}
