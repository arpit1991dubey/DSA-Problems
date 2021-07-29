  int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count = 0; //intitialize count
        int result = 0; //initialize max
 
    for (int i = 0; i < n; i++)
    {
        // Reset count when 0 is found
        if (nums[i] == 0)
            count = 0;
        else
        {
            count++;//increase count
            result = max(result, count);
        }
    }
 
    return result;
        
    }
