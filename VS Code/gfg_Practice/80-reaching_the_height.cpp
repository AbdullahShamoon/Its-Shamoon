#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> answer(int arr[], int n)
{
    sort(arr,arr+n,greater<int>());
    vector<int>v;
    if(n==0){
    v.push_back(-1);
    return v;
    }
    if(n==2)
    {
        if(arr[0]==arr[1]){
            v.push_back(-1);
            return v;
        }
    }
    int l=0,r=n-1;
    
    while(l<=r)
    {
        if(l==r)
        {
            v.push_back(arr[l]);
            return v;
        }
        v.push_back(arr[l]);
        v.push_back(arr[r]);
        l++,r--;
        
        if(l==r)
        {
            v.push_back(arr[l]);
            return v;
        }
    }
    return v;
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
    vector<int> c=answer(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}