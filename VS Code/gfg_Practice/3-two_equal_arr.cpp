#include<iostream>
using namespace std;

int check_arr(int a[],int b[],int n,int check[],long m)
{
    for(int i=0;i<n;i++)
    {
        check[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        check[b[i]]--;
    }
    for(int i=0;i<m;i++)
    {
        if (check[i]==0)
        {
            return 1;
        }
    }
    return 0;
    
}

int main()
{
    int n;
    cout<<"Size:- ";
    cin>>n;
    int a[n];
    int b[n];
    cout<<"Array A:- ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array B:- ";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    long m=1e6;
    int check[m];
    for(int i=0;i<m;i++)
    {
        check[i]=0;
    }
    int v= check_arr(a,b,n,check,m);
    cout<<"ans="<<v;
    return 0;    
}