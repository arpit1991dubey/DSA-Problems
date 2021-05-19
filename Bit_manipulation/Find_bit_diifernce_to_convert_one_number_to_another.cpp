// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
/*
You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.*/

class Solution{
    public:
    int countset(int n)
    {
        int count=0;
        while(n>0)
        {
            count++;
            n&=(n-1);
        }
        return count;
    }
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
       
       return countset(a^b); // Your logic here
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
