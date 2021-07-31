## Question link - https://leetcode.com/problems/valid-mountain-array/submissions/
# Solution-:
```
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int down=0;
        int up=0;
        if(arr.size()<3) return false;  
        for(int i=1;i<arr.size();i++)
        {        // skip first index 
            if(arr[i-1]==arr[i]) 
                return false;
            else if(arr[i-1] < arr[i])
            {
                if(down!=0)
                    return false;
                up++;
            }
            else if (arr[i-1]>arr[i])
            {
                down++;
                if(i==arr.size()-1 and up>0) 
                    return true;
            }
    }
        return false;
    }
};
```
