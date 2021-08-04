## Problem link- https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
# Solution-:
```
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int A[], int n)
{
    map<int,int>store;
    int mx=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum==0)
        {
            mx=i+1;
        }
        else
        {
             if(store.find(sum)!=store.end())
            {
                mx=max(mx,i-store[sum]);
            }
            else
            {
                store[sum]=i;
            }
        }
    }
    // Your code here
    return mx;
}
```
