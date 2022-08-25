#include<iostream>
using namespace std;

int binary_search(int arr[],int s, int l,int r)
{
    
    
        int mid=(l+r)/2;
        if(arr[mid]>s)
        {
            binary_search(arr,s,l,mid-1);
        }
        else if(arr[mid]<s)
        {
            binary_search(arr,s,mid+1,r);
        }
        else
        {
            return mid;
        }
    
    return 0;
}

int main()
{
    int n,s;
    cout<<"Size:- ";
    cin>>n;
    int arr[n];
    cout<<"Array:- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Search:- ";
    cin>>s;
  
    int b=binary_search(arr,s,0,n-1);
    if(b==0)
        cout<<"Element not present in the array !!";
    else
        cout<<"Element is present at Index "<<b;
    return 0;
}