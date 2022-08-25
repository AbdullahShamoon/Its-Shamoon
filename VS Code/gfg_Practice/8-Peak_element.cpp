#include<iostream>
using namespace std;

//Wrong Output//
/*int peak_element(int arr[],int n)
{
     int l=0,m=n-1;
    for(int i=0;i<(n/2)+1;i++)
    {
        if(i==0)
        {
            if(arr[i]>arr[i+1])
                return i;
            
            if(arr[n-1-i]>arr[n-i-2])
                return (n-i);   
        }
        else
        {
    
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                return i;
            if(arr[n-i-1]>arr[n-i-2] && arr[n-i]>arr[n-i+1])
                return (n-i);
        }
    }
    return -1;
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
    int b=peak_element(arr,n);
    cout<<b;
}
*/

int main()
{
 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

for(int i=0 ; i<n-1 ;i++)
 {
    if((arr[i]>arr[i+1]) && (arr[i]>arr[i-1]))
    {
       cout<<i;
     }
 }
}