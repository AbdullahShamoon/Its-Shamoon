#include<iostream>
using namespace std;

void print_arr(int arr[],int size)
{
    for(int i =0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Insertion_sort(int arr[] , int size)
{
    for(int i=1;i<size;i++)
    {
        int ptr=arr[i];
        int j=i-1;
        while(ptr < arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=ptr;
    }
    cout<<"Sorted Array:- ";
    print_arr(arr,size);
}


int main()
{
    int arr[]={4,2,8,1,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array:- ";
    print_arr(arr,size);
    Insertion_sort(arr,size);

    return 0;
}