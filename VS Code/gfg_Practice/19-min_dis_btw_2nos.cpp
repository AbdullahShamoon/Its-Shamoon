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
    int x,y;
    cin>>x>>y;
    int found1=0,found2=0;
    int p=1e9+2,q=1e9+2;
    int m=1e9+2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            found1=1;
            p=i;
        }
        if(arr[i]==y)
        {
            found2=1;
            q=i;
        }
        if(found1==1 && found2==1)
            m=min(m,abs(q-p));
    }
    if(found1==1 && found2==1)
        cout<<m;
    else
        cout<<"-1";
}