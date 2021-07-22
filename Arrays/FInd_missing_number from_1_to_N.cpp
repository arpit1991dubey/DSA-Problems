
/*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int missingnumber(int arr[],int n)
{
    int store[n];
    memset(store,0,sizeof(store));
    for(int i=0;i<n;i++)
    {
        store[arr[i]]++;
    }
    for(int i=1;i<n;i++)
    {
        if(store[i]==0)
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter the array values now";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int res=missingnumber(arr,n);
   cout<<res;

    return 0;
}
