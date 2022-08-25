#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1={1,2,3,4,5,6,7};
    vector<int> :: iterator it;
    for(it=v1.begin(); it!=v1.end();it++)
    {
        cout<<(*it)<<" ";
    }
}