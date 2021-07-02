/*Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.*/
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isprime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            
            {
                return false;
            }
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        int count=0;
       for(int i = 2; i * i <= N; i++)
    { 
        if (isprime(i))
        {
            if (i * i <= N)
            {
                count++;
            }
        }
    }
    return count;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
