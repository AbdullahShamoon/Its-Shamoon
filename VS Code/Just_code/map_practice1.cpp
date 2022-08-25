#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int , int> m;
    m.insert(pair<int ,int>(14,40));
    m.insert(pair<int ,int>(10,20));
    map<int ,int> :: iterator it;
    for(it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    m.insert(pair<int ,int>(1,70));
    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cout<<"key:-";
        cin>>x;
        cout<<"container:-";
        cin>>y;
        m.insert(pair<int ,int>(x,y));
    }
    for(it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}