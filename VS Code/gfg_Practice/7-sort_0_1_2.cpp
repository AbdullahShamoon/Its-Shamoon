#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        if(arr[i]==1)
        {
            c1++;
        }
        if(arr[i]==2)
        {
            c2++;
        }
    }
    int l=0;
    for(int i=0;i<c0;i++){
        arr[l]=0;
        l++;
    }
    for(int i=0;i<c1;i++){
        arr[l]=1;
        l++;
    }
    for(int i=0;i<c2;i++){
        arr[l]=2;
        l++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}