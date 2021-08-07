## Problem link- https://leetcode.com/problems/3sum/submissions/
# Solution-:
```
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        int n=arr.size();
        vector<vector<int>> store;
        if(n==0)
            return store;
        sort(arr.begin(),arr.end());
        int k=0;
        for(int i=0;i<n-2;i++)
        {
            if(i==0 || arr[i]!=arr[i-1])
            {
            int lo=i+1;
            int hi=n-1;
            int sum=0-arr[i];
            while(lo<hi)
            {
                if(arr[lo]+arr[hi]==sum)
                {
                    store.push_back({arr[i],arr[lo],arr[hi]});
                    while(lo<hi && arr[lo]==arr[lo+1]) lo++;
                    while(lo<hi && arr[hi]==arr[hi-1]) hi--;
                    lo++;
                    hi--;  
                }
                else if(arr[lo]+arr[hi]<sum)
                    lo++;
                else
                    hi--;
            }
        }
        }
        return store;
        
    }
};
```
