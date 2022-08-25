#include<iostream>
using namespace std;

int missing_no(int arr[],int n)
{
    int one=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1){
                one = 1;
            }
        }
        if (one == 0)
            return 1;
        if(n==1){
            if(arr[0]==1)
                return 2;
            else
                return 1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0 || arr[i]>n)
                arr[i]=1;
        }
        for(int i=0;i<n;i++)
        {
            int x=abs(arr[i]);
            if(arr[x-1]>0)
                arr[x-1]*=-1;
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]>0)
                return i+1;
        }
        return n+1;
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
    int m=missing_no(arr,n);
    cout<<m;
    
    return 0;
}