#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

// vector<long long int>P;
//        long long product=1;
//        int is_zero=0;
//        for(int i=0;i<n;i++)
//        {
//            if(nums[i]==0)
//                 is_zero++;
//        }
//        for (int i=0;i<n;i++)
//        {
//            if(is_zero!=0)
//            {
//                if(nums[i]==0)
//                     continue;
//                product=nums[i]*product;
//            }
//            else
//                product=nums[i]*product;
//        }
//        for(int i=0;i<n;i++)
//        {
//            if(is_zero==1)
//            {
//                if(nums[i]!=0)
//                {
//                    P.push_back(0);
//                }
//                else
//                     P.push_back(product);
//            }
//            else if(is_zero!=0 and is_zero!=1)
//                 P.push_back(0);
//            else
//            {
//                int ans=product/nums[i];
//                P.push_back(ans);
//            }
//        }
//        for(int i=0;i<P.size();i++)
//        {
//         cout<<P[i]<<" ";
//        }

    vector<long long int> left(n);
        vector<long long int> right(n);
        vector<long long int> ans(n);
        left[0]=1;
        for(int i=1;i<n;i++)
            left[i]=left[i-1]*nums[i-1];
        right[n-1]=1;
        for(int i=n-2;i>=0;i--)
            right[i]=right[i+1]*nums[i+1];
        for(int i=1;i<n;i++)
            ans[i]=left[i]*right[i];
        
       for(int i=1;i<ans.size();i++)
       {
        cout<<ans[i]<<" ";
       }
    
    return 0;
}
