/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target sum";
    int req;
    cin>>req;
    int i=0,j=0,sum=0;
    while(j<n)
    {
        sum+=arr[j];
        j++;
        while(sum>req && i<j)
        {
            sum-=arr[i];
            i++;
        }
             if(sum==req)
        {
            cout<<i<<" "<<j-1;
        
        }
       
    }
    

    return 0;
}
