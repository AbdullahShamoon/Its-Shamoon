#include<iostream>
using namespace std;

void sub_arr_sum(int arr[],int s,int n)
{
    int sum=0,low=0;
    for(int i=0;i<n;i++)
    {
        if(sum<s)
        {
            sum+=arr[i];
        }
        if(sum>s)
        {
            sum=sum-arr[low];
            low++;
        }
        if(sum==s)
        {
            cout<<"From Index "<<low<<" to "<<i;
            break;
        }
    }
}


int main()
{
    int n,s;
    cout<<"Size:- ";
    cin>>n;
    int arr[n];
    cout<<"Array:- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum:- ";
    cin>>s;
    sub_arr_sum(arr,s,n);
    return 0;
}


/*
int sum=0,left=0,right=0;
    vector<int>ans;
    while(left<n || right<n)
    {
        if(sum<s)
        {
            sum+=arr[right++];
        }
        if(sum>s)
        {
            sum=sum-arr[left++];
        }
        if(sum==s)
        {
            if(left==right){
                ans.push_back(-1);
                return ans;
            }
            else{
                ans.push_back(left+1);
                ans.push_back(right);
                return ans;
                break;
            }
        }
    }
    */

   //correct answer======>
   /*
   long long sum = 0, i = 0, j = 0;
        
        while((i < n) || (j < n)){
            if(sum == s) return {j + 1, i};
            else if(sum > s) sum -= arr[j++];
            else if(i < n) sum += arr[i++];
            
            if((i == n) && (sum < s)) break;
        }
        return {-1};
        */