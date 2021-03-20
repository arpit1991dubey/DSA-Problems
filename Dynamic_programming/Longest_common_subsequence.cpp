#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2,int m,int n)
{
 int dp[m+1][n+1];
 memset(dp, -1, sizeof(dp));
 if(dp[m][n]!=-1)
 {
     return dp[m][n];
 }
 

    if(m==0 || n==0)
        {
            dp[m][n]=0;
        }
    else
        {
        if(s1[m-1]==s2[n-1])
        {
            dp[m][n]= 1+lcs(s1,s2,m-1,n-1);
        }
        else
        {
            dp[m][n]= max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
        }
        
        }
    return dp[m][n];
}
int main()
{
    string s1,s2;
    int m,n;
    cout<<"Enter length of first string";
    cin>>m;
    cout<<"Enter length of second string";
    cin>>n;
    cout<<"Enter first string";
    cin>>s1;
    cout<<"Enter second string";
    cin>>s2;
    cout<<lcs(s1,s2,m,n);
    return 0;
}