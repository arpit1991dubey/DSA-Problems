## Question link- https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

# Solution-:
```
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
    int i,j;
    i=0;j=1;
    int sum=0;
    vector<int>store;
    if(n==1 && s==arr[0])
        {
        store.push_back(1);
        store.push_back(1);
        return store;
        }
    while(j<n && i<n)
    {
        sum=0;
        for(int k=i;k<=j;k++)
        {
            sum=sum+arr[k];
        }
        if(sum==s)
        {
        store.push_back(i+1);
        store.push_back(j+1);
        break;
        }
        if(sum <s)
            {
                j++;
            }
        else
        {
            i++;
        }
    }
    if(store.empty())
        store.push_back(-1);
    return store;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
```
