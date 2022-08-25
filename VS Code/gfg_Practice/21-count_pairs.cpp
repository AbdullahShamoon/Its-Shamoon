#include<iostream>
#include<unordered_map>
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
    int k;
    cin>>k;
    unordered_map<int ,int>m;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int b=k-arr[i];
        if(m[b])
        {
            ans+=m[b];
        }
        m[arr[i]]++;
    }
    cout<<"\n"<<ans;

    
    return 0;
}