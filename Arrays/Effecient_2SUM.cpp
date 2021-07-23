class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//Approach 1
      //         sort(nums.begin(),nums.end());
//         vector<int>store;
//         int n=nums.size();
//         int start=0;
//         int end=n-1;
//         while(start<end)
//         {
//             int current=nums[start]+nums[end];
//             if(current==target)
//             {
//                 store.push_back(start);
//                 store.push_back(end);
//             }
//             else if(current<target)
//             {
//                 start++;
//             }
//             else
//             {
//                 end--;
//             }
//         }
//         return store;
      
      
      //Approach 2
        vector<int>res;
        map<int,int> store;
        for(int i=0;i<nums.size();i++)
        {
            if(store.find(target-nums[i])!=store.end())
            {
                res.push_back(store[target-nums[i]]);
                res.push_back(i);
            }
            store[nums[i]]=i;
        }
        return res;
        
    }
};
