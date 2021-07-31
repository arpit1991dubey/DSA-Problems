/*Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

    i != j
    0 <= i, j < arr.length
    arr[i] == 2 * arr[j]

 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.

Example 2:

Input: arr = [7,1,14,11]
Output: true
Explanation: N = 14 is the double of M = 7,that is, 14 = 2 * 7.
*/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        map<int,bool>mp;
        
        for(int i=0;i<n;i++)
        {
            if((mp[2*arr[i]]==1 ) || (mp[arr[i]/2]==1 && arr[i]%2==0))
            {
                return true;
            }
            mp[arr[i]]=1;
            // for(int j=i+1;j<n;j++) Bruteforce
            // {
            //     if(arr[i]==2*arr[j] || arr[j]==2*arr[i])
            //     {
            //         return true;
            //     }
            // }
        }
        return false;
    }
};
