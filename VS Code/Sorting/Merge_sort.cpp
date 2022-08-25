#include<iostream>
using namespace std;
void merge(int arr[],int l, int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],M[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        M[i]=arr[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=M[j])
            arr[k]=L[i++];
        else
            arr[k]=M[j++];
        k++;
    }
    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=M[j++];
}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}