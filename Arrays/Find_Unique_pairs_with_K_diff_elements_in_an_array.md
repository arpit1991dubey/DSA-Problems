## Question link- https://leetcode.com/problems/k-diff-pairs-in-an-array/
# Solution-:
``
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int count=0;
        if(k!=0){
            for(auto itr:freq){
                if(freq.find(itr.first+k)!=freq.end()){
                    count++;
                }
            }
        }
        else{
            for(auto itr: freq){
                if(itr.second>1){
                    count++;
                }
            }
        }
        return count;
    }
};
``
