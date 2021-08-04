## Question link- https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
# Solution-:

```
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 

    map<int,int>store;
    int mx=0;
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=A[i];
        if(sum==K)
        {
            mx=i+1;
        }
        if(store.find(sum)==store.end())
            store[sum]=i;
        if(store.find(sum-K)!=store.end())
            {
                if (mx < (i - store[sum - K]))
                    mx = i - store[sum - K];
            }
           
        }
    
    // Your code here
    return mx;    

    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends

```
