## Question link - https://leetcode.com/problems/find-peak-element/submissions/

# Solution-:
```

class Solution {
public:
    int peak(vector<int>arr,int low,int high,int n)
    {
        int mid=low+(high-low)/2;
        if((mid==0 || arr[mid]>arr[mid-1]) && (mid==n-1 || arr[mid]>arr[mid+1]))
        {
            return mid;    
        }
        else if(mid>0 && arr[mid-1]>arr[mid])
            return peak(arr,low,mid-1,n);
        else
            return peak(arr,mid+1,high,n);
    }
    int findPeakElement(vector<int>& arr) {
        return peak(arr,0,arr.size()-1,arr.size());
       
    }
};

```
