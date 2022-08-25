#include<iostream>
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
    
    int jump=0;
    if(arr[0]==0) cout<<-1;
    else
    {
        for(int i=0 ;i<n ;i++)
        {
            int pos=i;
            int steps=arr[i];
            

        }
    }

    return 0;
}