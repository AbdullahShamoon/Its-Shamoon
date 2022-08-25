#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string str_rev;
    for(int i=0;i<str.size();i++)
    {
        str_rev.push_back(str[str.size()-i-1]);
    }
    cout<<str_rev;
    
    return 0;
}