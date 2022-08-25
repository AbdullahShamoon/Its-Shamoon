#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(12);
    v1.push_back(14);
    v1.push_back(17);
    v1.push_back(72);
    int s= v1.size();
    cout<<"size of vector1 = "<<s<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl<<"poping last element"<<endl;
    v1.pop_back();
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    vector <int>v2={1,2,3};
    int x;
    for(int i=0;i<4;i++)
    {
        cin>>x;
        v2.push_back(x);
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    for(int i=0;i<4;i++)
    {
        cin>>x;
        v2.push_back(x);
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
}