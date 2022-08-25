// QUESTION -> Given a no. a , find the smallest no. b such that if we multi[ly the digits of b, we get a. the result b should have minimum of two digits.
//eg:-     i/o - 36    o/p - 49
//         i/o - 100   o/p - 455
//         i/o - 1     o/p - 11
//         i/o - 13    o/p - Not possible

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    bool is_prime=true;

    for(int i=2;i<a;i++)
    {
        if(n%i==0){
            is_prime=false;
            break;
        }
    }
    if(is_prime==true)
        cout<<"Not Possible";
    else
    {
        for(int i=0;i<10000;i++)
        {

        }   
    }    

    
    return 0;
}