#include<iostream>
#include<vector>
using namespace std;

void duplicate_check(int arr[] , int n)
{
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n>1)
        {
            cout<<i<<" ";
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    duplicate_check(arr,n);
    return 0;
}