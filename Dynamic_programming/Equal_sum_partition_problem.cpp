#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
bool isEqualSumAvl(int arr[],int n)
{
    
    int arraysum=0;
    for(int i=0;i<n;i++)
    {
        arraysum+=arr[i];
    }
    bool dp[n+1][arraysum+1];
     memset(dp,false,sizeof(dp));
    if(arraysum%2!=0)
        return false;
    else
    {
    for(int i=0;i<=n;i++)
        dp[i][0]=true;
        
    for(int j=0;j<=arraysum/2;j++)
        dp[0][j]=false;
        
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=arraysum/2;j++)
            {
                if(arr[i-1]>j)
                {
                    dp[i][j]= dp[i-1][j];
                }
                else
                {
                    dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
            }
        }
    }
        return dp[n][arraysum/2];
    
}
    
   
        

int main()
{
    int n=5;
    int arr[5]={15,5,5,15};
    cout<<isEqualSumAvl(arr,n);


    return 0;
}
