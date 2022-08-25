#include<iostream>
#include<map>
using namespace std;
int main()
{
    map < int , string > m;
    m[1]="Abdullah";
    m[3]="Mallick";                  //ways to inserting values in the map::==
    m[2]="Shamoon";                  //;;==
    m.insert({4,"apple"});
    m.insert({5,"Mango"});
    m.insert({7,"Banana"});
    m.insert({6,"Orange"});
    m.insert({8,"apple"});

    if(m.find(8))
    {
        cout<<"presean:";
    }
    
    // for(int i=1;i<=3;i++)
    // {
    //     cout<<m[i]<<" ";
    // }
    // cout<<endl;
    // map<int,string> :: iterator i;

    // cout<<"size:-"<<m.size()<<endl;   //to get size of the map

    // cout<<"Key   Value"<<endl;

    // for(i=m.begin();i!=m.find(6);i++)
    // {
    //     cout<<" "<<i->first<<"   "<<i->second<<endl;
    // }

    return 0;
}