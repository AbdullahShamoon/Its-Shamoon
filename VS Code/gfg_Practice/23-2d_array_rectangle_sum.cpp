#include<iostream>
using namespace std;
int main()
{
    int N=200;
    int n;
    cout<<"Size:- ";
    cin>>n;
    int arr[N][N];
    int hash[N][N];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            hash[i][j]=arr[i][j]+hash[i-1][j]+hash[i][j-1]-hash[i-1][j-1];
        }
    }
    cout<<"Array:-"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int q;
    cout<<"Enter no, of queries:-- ";
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<"sum=";
        cout<<hash[c][d]-hash[c][b-1]-hash[a-1][d]+hash[a-1][b-1]<<endl;
    }


    
    return 0;
}
   