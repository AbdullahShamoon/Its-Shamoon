#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int dp[10001];
// Fibonacci series :-   0 1 1 2 3 5 8 13 21 34 55 89 ..........
int fib(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];                 
    return dp[n] = (fib(n-1) + fib(n-2));
}                      
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<fib(n);
    
    return 0;
}