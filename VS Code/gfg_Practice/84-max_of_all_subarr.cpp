#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// this code shows TLE //

vector <int> max_of_subarrays(int arr[], int n, int k)
    {
        vector<int>v;
        if(k>n){
            v.push_back(-1);
            return v;
        }
        int i=0,j=k;
        while(j!=n+1){
            
            v.push_back(*max_element(arr+i,arr+j));
            i++,j++;
        }
        return v;
        // your code here
    }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int>v=max_of_subarrays(arr,n,k);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}