#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==0)
        cout<<"0";
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    cout<<j+1;

    // int x=0;                                      // this will only return the size of array but will
    // for(int i=0;i<n-1;i++)                        // not change the array accordingly(remove duplicate)
    // {
    //     if(arr[i]==arr[i+1])
    //         x++;
    // }
    // cout<<n-x;

    return 0;
}