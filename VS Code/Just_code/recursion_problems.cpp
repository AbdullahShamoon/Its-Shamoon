#include<iostream>
using namespace std;

int factorial(int n)
{
     if(n==0)
     {
         return 1;
     }

    return n*factorial(n-1);
}

int power(int n ,int p)
{
    if (p==0)
    {
        return 1 ;
    }
    return n*power(n,p-1);
}



int main()
{
    //Factorial::-
    /*
    int n;
    cout<<"Entre any no. ::- ";
    cin>>n;

    int c=factorial(n);
    cout<<"Factorial of "<<n<<" = "<<c;
    */
    //Power(n^p)::-
    /*
    int n,p;
    cout<<"Enter any no. any && it Power::- ";
    cin>>n>>p;
    int c= power(n,p);
    cout<<n<<"^"<<p<<"="<<c;
    */
    






}