## Question link- https://leetcode.com/problems/third-maximum-number/
# Solution-
```
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int mx=INT_MIN;
          set<int>store;
        int count=1;
        if(nums.size()<3)
             {
                 mx=*max_element(nums.begin(),nums.end());
                return mx;
             }
        sort(nums.begin(),nums.end(),greater< int >());
        for(int i=1;i<nums.size();i++)
        {
         if(nums[i-1]!=nums[i])
             count++;
         if(count==3)
            return nums[i];
        }
        return nums[0];
        
    }
};
```
