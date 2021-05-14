// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
/*
Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move

    to the cell diagonally up towards the right 
    to the right
    to the cell diagonally down towards the right

Find out maximum amount of gold which he can collect.


Example 1:

Input: n = 3, m = 3
M = {{1, 3, 3},
     {2, 1, 4},
     {0, 6, 4}};
Output: 12
Explaination: 
The path is {(1,0) -> (2,1) -> (2,2)}.
*/


class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        for(int col=m-2;col>=0;col--)
        {
            for(int row=0;row<n;row++)
            {
                int right = M[row][col+1];
                int rightup = (row==0) ? 0:M[row-1][col+1];
                int rightdown = (row==n-1) ? 0:M[row+1][col+1];
                M[row][col]=M[row][col]+max(right,max(rightup,rightdown));
                
                
            }
        }
        int res=M[0][0];
        for(int i=0;i<n;i++)
        {
            res=max(res,M[i][0]);
        }
        // code here
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
