class Solution{

    // Function to find the trapped water between the blocks.
    public:
    // int lfmax(int arr[],int n,int i)
    // {
    //   int lf=0;
    //     for(int j=0;j<=i;j++)
    //     {
    //         lf=max(arr[j],lf);
    //     }
    //     return lf;   
    // }
    // int rtmax(int arr[],int n,int i)
    // {
    //      int rt=0;
    //     for(int j=n-1;j>=i;j--)
    //     {
    //         rt=max(arr[j],rt);
    //     }
    //       return rt;
    // }
    int trappingWater(int arr[], int n){
         // left[i] contains height of tallest bar to the
    // left of i'th bar including itself
    int left[n];
 
    // Right [i] contains height of tallest bar to
    // the right of ith bar including itself
    int right[n];
 
    // Initialize result
    int water = 0;
 
    // Fill left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);
 
    // Fill right array
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);
 
    // Calculate the accumulated water element by element
    // consider the amount of water on i'th bar, the
    // amount of water accumulated on this particular
    // bar will be equal to min(left[i], right[i]) - arr[i] .
    for (int i = 0; i < n; i++)
        water += min(left[i], right[i]) - arr[i];
 
    return water;
    }
};
