#include<iostream>
using namespace std;


int binary_to_decimal(int n)
{
    int temp=n,last=0,base=1,value=0;
    while(temp)
    {
        last=temp%10;
        temp=temp/10;
        value= value + base*last ;
        base=base*2;
    }
    return value;
}

int decimal_to_binary(int n)
{
    int x[32],value=0,i=0;
    while(n>0)
    {
        x[i]= n%2;
        n=n/2;
        i++;        
    }
    cout<<"Binary no. =: ";
    for(int j=i-1;j>=0;j--)
    {
        cout<<x[j];
    }

    return value;
}

void binary_to_octal(int n)
{
    int temp=n,last=0,base=1,value=0;
    while(temp)
    {
        last=temp%10;
        temp=temp/10;
        value= value + base*last ;
        base=base*2;
    }
    int octal_no[32],i=0;
    while(value>0)
    {
        octal_no[i]= value%8;
        value=value/8;
        i++;        
    }
    cout<<"Octal no.=: ";
    for(int j=i-1;j>=0;j--)
    {
        cout<<octal_no[j];
    }

}

int main()
{

    // Binary to Decimal conversion
    /*
    int n;
    cout<<"Enter any binary no ::";
    cin>>n;
    
    int c=binary_to_decimal(n);
    cout<<"Decimal value ="<<c;
    */
    
    // Decimal to Binary conversion
    /*
    int n;
    cout<<"Enter any Decimal no. ::";
    cin>>n;
    decimal_to_binary(n);
    */
    
    // Binary to Octal conversion
    /*
    int n;
    cout<<"Enter any Binary no. ::";
    cin>>n;
    binary_to_octal(n);
    */

    return 0;
    
}