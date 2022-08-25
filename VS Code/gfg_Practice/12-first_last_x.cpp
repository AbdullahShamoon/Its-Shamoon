#include<iostream>
#include<bits/stdc++.h>
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
    int x;
    cin>>x;

    vector<int>v;
    int found=binary_search(arr[0],arr[n-1],x);
    if(found==0){
        v.push_back(-1);
        v.push_back(-1);
        for(int i=0;i<2;i++)
            cout<<v[i];
    }
    else{
    int p=lower_bound(arr[0],arr[n-1],x)-arr[0];
    int q=upper_bound(arr[0],arr[n-1],x)-arr[0]-1;
    v.push_back(p);
    v.push_back(q);
    for(int i=0;i<2;i++)
        cout<<v[i];
    }
    return 0;
}
/*
done in gfg... and it worked . :-

 vector<int>v;
  int found=binary_search(arr,arr+n,x);
  if(found==0){
      v.push_back(-1);
      v.push_back(-1);
      return v;
  }
  
  int p=lower_bound(arr,arr+n,x)-arr;
  int q=upper_bound(arr,arr+n,x)-arr-1;
  v.push_back(p);
  v.push_back(q);
  
  return v;
  */
