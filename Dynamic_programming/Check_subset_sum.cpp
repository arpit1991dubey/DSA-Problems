#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
bool isSubsetSumAvl(int arr[],int n,int sum)
{
    //Recursive approach
    // if (sum == 0)
    //     return true;
    // if (n == 0)
    //     return false;
    // if(arr[n-1]>sum)
    //     return isSubsetSumAvl(arr,n-1,sum);
    // else
    //     return isSubsetSumAvl(arr,n-1,sum-arr[n-1]) || isSubsetSumAvl(arr,n-1,sum);
        
    //Iterative approach 
    bool dp[n+1][sum+1];
    memset(dp,false,sizeof(dp));

    for(int i=0;i<=n;i++)
        dp[i][0]=true;
        
    for(int j=0;j<=sum;j++)
        dp[0][j]=false;
        
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
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
        return dp[n][sum];
    
}
    
   
        

int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    cout<<isSubsetSumAvl(arr,n,7);


    return 0;
}
