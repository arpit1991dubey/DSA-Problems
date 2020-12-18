#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min_ind;
    for(int i=0;i<n-1;i++)
    {
        min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
                swap(arr[i],arr[min_ind]);
                
            }
        }
    }
    for(int x=0;x<n;x++)
    {
        cout<<arr[x]<<" ";
    }

    return 0;
}
