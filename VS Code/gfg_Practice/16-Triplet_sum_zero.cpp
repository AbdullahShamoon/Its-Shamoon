#include<iostream>
#include<algorithm>
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
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int l=i+1,r=n-1;
        while(l<r)
        {
            if(arr[i]+arr[l]+arr[r]==0)
            {
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
                break;
            }   
            else if(arr[i]+arr[l]+arr[r]<0)
                l++;
            else
                r--;
        }
    }


    return 0;
}