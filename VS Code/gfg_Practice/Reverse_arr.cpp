#include<iostream>
using namespace std;

void reverse_array(int arr[],int n)
{
    cout<<"Reversed Array:- ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }          
}

int main()
{
    int n;
    cout<<"Size:- ";
    cin>>n;
    int arr[n];
    cout<<"Array:- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr,n);
    return 0;
}