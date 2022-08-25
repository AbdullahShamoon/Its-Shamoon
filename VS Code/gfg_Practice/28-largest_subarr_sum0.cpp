#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

     unordered_map<int,int>map;
        int sum=0;
        int maxx=0;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                maxx=max(maxx,i+1);
            }
            else
            {
                if(map.find(sum)==map.end())
                {
                    map[sum]=i;
                }
                else
                {
                    int oldindex=map[sum];
                    int length=i-oldindex;
                    maxx=max(maxx,length);
                }
            }
        }
        cout<<maxx;
    
    return 0;
}