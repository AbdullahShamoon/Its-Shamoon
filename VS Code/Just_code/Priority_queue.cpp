#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>p;                                    // sort in decreasing order
    p.push(10);
    p.push(29);
    p.push(9);
    p.push(97);
    p.push(1);
    p.push(19);
    cout<<p.top()<<endl;

    priority_queue<int , vector<int>, greater<int>>p1;       // sort in increasing order 
    p1.push(10);
    p1.push(29);
    p1.push(9);
    p1.push(97);
    p1.push(1);
    p1.push(19);
    cout<<p1.top();
    
    
    return 0;
}