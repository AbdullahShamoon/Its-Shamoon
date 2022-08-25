#include<iostream>
using namespace std;

void swap(int arr[],int left, int right)
{
    int temp;
    temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
}

void revArr_group(int arr[],int n, int k)
{
    for(int i=0;i<n;i=i+k)
    {
        int left=i;
        int right=min(i+k-1,n-1);
        while(left<right)
        {
            swap(arr,left,right);
            left++;
            right--;
        }
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
    int k;
    cout<<"Group size:-";
    cin>>k;
    revArr_group(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}