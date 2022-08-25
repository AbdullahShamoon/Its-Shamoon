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

    sort(arr,arr+n);

    int arr2[n];
    int l=0,r=n-1,k=0;

    // method 1:-
    // space complexity of it is O(1)

    /*
    sort(arr,arr+n);
    long long sum = 0;
    for(int i = 0;i<n/2;i++)
    {

        sum+= 2*(arr[n-i-1]);
        sum-= 2*(arr[i]);
    }
    */

    //method 2:-    S.C= O(n)

    while(l<r)
    {
        arr2[k++]=arr[l++];
        arr2[k++]=arr[r--];
    }
    if(n%2==1)
        arr2[k]=arr[l];

    int sum=0;
    for(int i=0;i<n-1;++i)
    {
        sum+=abs(arr2[i]-arr[i+1]);
    }
    sum+=abs(arr2[0]-arr[n-1]);

    cout<<"sum= "<<sum;
}
