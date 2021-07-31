## Problem Link- https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

# Solution-:

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>num(arr.size()-1);
            
        int max=*max_element(arr.begin(),arr.end());
      
        for(int i=0;i<arr.size()-1;i++)
        {
            if(max>arr[i])
            {
                num[i]=max;
            }
            else{ 
                max=*max_element(arr.begin()+i+1,arr.end()); 
                num[i]=max;
            }
        }
        num.push_back(-1);
        return num;
    }
};
