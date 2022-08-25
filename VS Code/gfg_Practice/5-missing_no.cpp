#include<iostream>
using namespace std;
int missing_no(int arr[],int N)
{
    int s= N*(N+1)/2;
    for(int i=0;i<N-1;i++)
    {
        s=s-arr[i];
    }
    return s;
}

int main()
{
    int N;
    cout<<"Array size:-";
    cin>>N;
    int arr[N-1];
    cout<<"Array (from elements- 1 to "<<N<<"):-";
    for(int i=0; i<(N-1);i++)
    {
        cin>>arr[i];
    }
    int m=missing_no(arr,N);
    cout<<"Missing Number= "<<m;
}