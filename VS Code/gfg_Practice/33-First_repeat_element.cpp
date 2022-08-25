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

    long long k=100;
    long long hash[k]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int t=1;
    for(long i=0;i<n;i++)
    {
        if(hash[arr[i]]>1)
        {
            t=0;
            cout<<i+1<<endl;
            break;
        }    
    }
    if(t==1)
        cout<<"-1";

    return 0;
}