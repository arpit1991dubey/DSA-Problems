#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int c0=0,c1=0,c2=0;
    int i;
    
    cout<<"Enter length of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the array values";
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            c0++;
        }
        else if(arr[i]==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    
    }
    i=0;
    while(c0>0)
    {
        arr[i++]=0;
        c0--;
    }
    while(c1>0)
    {
        arr[i++]=1;
        c1--;
    }
    while(c2>0)
    {
        arr[i++]=2;
        c2--;
    }
    for(int j=0;j<n;j++)
    {
           cout<<arr[j]<<" ";
    }

    return 0;
}
