/*
581. Shortest Unsorted Continuous Subarray
Medium

Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

Return the shortest such subarray and output its length.

 

Example 1:

Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.

Example 2:

Input: nums = [1,2,3,4]
Output: 0

Example 3:

Input: nums = [1]
Output: 0 
*/


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>store(nums);
        sort(store.begin(),store.end());
        int n=nums.size();
        int jugad=0;
        int i=0;
        while(i<n && store[i]==nums[i])
        {
            i++;
        }
        int j = nums.size()-1;
        while(j>0 && store[j]==nums[j])
        {
            j--;  
            jugad++;
        }
        if(i==nums.size()) return 0;
        return (nums.size()-(i+jugad));
        
    }
};
