// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    
    bool isNumericChar(char x)
{
    return (x >= '0' && x <= '9') ? true : false;
}
    int atoi(string str) {
        int n=str.length();
        int res=0;
        int sign=1;
        int i=0;
         if(str[0]=='-')
    {
        sign=-1;
        i++;
    }
    for (;i<n; i++)
    {
        if(!isNumericChar(str[i])&&str[0]!='-')
        {
            return -1;
        }
        else{
            res = res * 10 + str[i] - '0';
        }
    }
    return res*sign;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
