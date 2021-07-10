// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#include<stack>
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    

    bool ispar(string x)
    {
        stack<char> st;
        char c;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='{' || x[i]=='[' || x[i]=='(')
            {
                st.push(x[i]);
                continue;
            }
            if(st.empty())
                return false;
            switch (x[i]){
                case ')':
                    c=st.top();
                    st.pop();
                    if(c=='['||c=='{')
                        return false;
                    break;
                case ']':
                    c=st.top();
                    st.pop();
                    if(c=='(' || c=='{')
                        return false ;
                    break;
                case '}':
                    c=st.top();
                    st.pop();
                    if(c=='[' || c=='(')
                        return false ;
                    break;
            }
                    
            
        }
        return (st.empty());
        // Your code here
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
