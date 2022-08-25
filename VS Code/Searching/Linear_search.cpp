#include<iostream>
using namespace std;

int main()
{
    int n,s,temp=0;
    cout<<"Array Size:- ";
    cin>>n;
    int arr[n];
    cout<<"Array:- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Search:- ";
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            cout<<s<<" is present at Index "<<i;
            temp=1;
        }
    }
    if(temp==0)
        cout<<s<<" is not present in the Array !!";
    return 0;
}