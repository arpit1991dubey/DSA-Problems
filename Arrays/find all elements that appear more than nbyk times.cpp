#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter k value";
    cin>>k;
    cout<<"Enter the array values now";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int , int > freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(auto it:freq)
    {
        if(it.second>n/k)
        {
            cout<<it.first<<" ";
        }
    }

    return 0;


}
