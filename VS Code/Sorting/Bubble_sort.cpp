#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Unsorted Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int first=0;
        for(int j=1;j<n-i;j++)
        {
            if(arr[first]>arr[j])
            {
                int temp=arr[first];
                arr[first]=arr[j];
                arr[j]=temp;
            }
            first++;
        }
    }
    cout<<"Sorted Array:= ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}