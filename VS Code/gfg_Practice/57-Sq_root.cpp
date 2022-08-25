#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
   
    // int s=sqrt(x);
    // cout<<s;


        long l=1,r=x;
        while(l<=r)
        {
            long mid=(r-l)/2 +l;
            if((mid*mid)>x)
            {
                r=mid;
            }
            else if((mid*mid)<x)
            {
                if((r-l)==1){
                    cout<<"1";
                    break;
                }
                l=mid;
            }
            else
            {
                cout<<mid;
                break;
            }
                
        }

    return 0;
}