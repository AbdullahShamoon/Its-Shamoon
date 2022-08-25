#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{

    // int arr[]={1,3,2,5,5,8,5,7,9};
    
    // int s = sizeof(arr) / sizeof(arr[0]);
    // cout<<"Unsorted array:- ";
    // for(int i=0;i<s;i++)
    // {
    //     cout<<arr[i]<<" ";
    
    // }

    
    // for sorting the array:-

    /*sort(arr,arr+s);
    cout<<endl<<"Sorted array:- ";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    
    }*/

    // int l= lower_bound(arr,arr+s,5)-arr;
    // cout<<endl<<"lower bound of 5 ;-"<<l;
    // int u= upper_bound(arr,arr+s,5)-arr-1;
    // cout<<endl<<"upper bound of 5 ;-"<<u;

    // count no. of occurrence of x in a sorted array:-
    int arr[]={1,1,4,5,6,6,6,6,6,7,8,9};
    int s = sizeof(arr) / sizeof(arr[0]);
    int l= lower_bound(arr,arr+s,6)-arr;
    cout<<endl<<"lower bound of 6 ;-"<<l;
    int u= upper_bound(arr,arr+s,6)-arr-1;
    cout<<endl<<"upper bound of 6 ;-"<<u;
    cout<<endl<<"totla no. of 6 is: "<<u-l+1;

    return 0;

}
