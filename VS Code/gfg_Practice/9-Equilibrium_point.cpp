#include<iostream>
using namespace std;

int equilibrium(int arr[],int n)
{
    int ans=-1,right,left;
    for(int i=0;i<n;i++)
        right+=arr[i];
    for(int i=0;i<n;i++)
    {
        right-=arr[i];
        if(right==left)
        {
            ans=i+1;
            break;
        }
        left+=arr[i];
    }
    return ans;
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
    int b=equilibrium(arr,n);
    cout<<n;
}