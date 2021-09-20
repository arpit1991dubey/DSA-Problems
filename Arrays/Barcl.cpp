#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int minDiff(int result,int n,int reaction[])
{
    int mn=abs(result-abs(reaction[0]-reaction[n-1]));
    int sum=reaction[0]+reaction[n-1];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int val=abs(result-reaction[i]-reaction[j]);
            if(val<mn)
            {
                mn=val;
                sum=reaction[i]+reaction[j];
            }
            else if(val==mn && reaction[i]+reaction[j]<sum)
            {
                sum=reaction[i]+reaction[j];
            }
        }
    }
    return sum;
}
int main()
{
    int res=5,n=8,arr[]={2,1,4,2,3,2,6,2};
    cout<<minDiff(res,n,arr);

    return 0;
}
