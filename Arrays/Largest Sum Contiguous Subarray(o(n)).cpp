#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int max_so_far=0,max_ending_here=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here+=arr[i];
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0)
        {
            max_ending_here=0;
        }
    }
    return max_so_far;
    
}

int main() {
    int t,n;
    int temp;
    cin>>t;
while(t--)
{
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>arr[0];
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
    }
	return 0;
}
