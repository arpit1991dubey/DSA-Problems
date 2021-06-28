
class Solution{
public:

    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
     for(int i=0;i<n;i+=k)
     {
         int left=i;
         int right=min(i+k-1,n-1);
         while(left<right)
         {
             swap(arr[left++],arr[right--]);
         }
     }
    }
};
