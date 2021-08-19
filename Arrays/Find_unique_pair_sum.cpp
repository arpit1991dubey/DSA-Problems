#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum,count=0;
    int arr[n];
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter profit to be found ";
    cin>>sum;
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>store;
    for(int i=0;i<n;i++)
    {
        store[arr[i]]++;
    }
    for(auto x:store)
    {
        if(x.second!=0)
        {
             if(store.find(sum-x.first)!=store.end())
            {
                count++;
                store[sum-x.first]=0;
            } 
        }
      
    }
    cout<<count;
    return 0;
}
