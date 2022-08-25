#include<iostream>
using namespace std;
void swap(int x,int y,int arr[])
{
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
int partition(int arr[],int l,int r)
{
    int i=l;
    int pivot=arr[r];
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            swap(i,j,arr);
            i++;
        }
    }
    swap(i,r,arr);
    return i;

}
void quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pivot=partition(arr,l,r);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,r);
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
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}