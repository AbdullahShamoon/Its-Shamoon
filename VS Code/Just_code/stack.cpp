#include<iostream>
using namespace std;

void push(int top,int arr[],int n)
{
    if(top==n-1)
    {
        cout<<"!! Stack Overflow !!\n";
        return;
    }
    cout<<"Enter the element:-\t";
    int y;
    cin>>y;
    top=top+1;
    arr[top]=y;
    
}
void pop(int top,int arr[],int n)
{
    if(top==-1)
    {
        cout<<"Stack Underflow !!\n";
        return ;
    }
        top--;
    
}
void view_stack(int top,int arr[])
{
    cout<<"Stack:-\t";
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i];
    }
}

int main()
    
{
    cout<<"Enter the size of Stack:";
    int n,top=-1;
    cin>>n;
    int arr[n];
    cout<<"1-Push\n2-Pop\n3-View Stack\n4-Exit\n";
    int x;
    while(x!=4)
    {
        cout<<"Enter yout choice\t";
        cin>>x;
        switch (x)
        {
            case 1:
                push(top,arr,n);
                break;
            case 2:
                pop(top,arr,n);
                break;
            case 3:
                view_stack(top,arr);
                break;
            case 4:
                exit;
                break;
            default:
                cout<<"Invalid Input::-";
    }
    }
}