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
    bool sorted;
    for(int i=0;i<n-1;i++)
    {
        sorted=true;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sorted=false;
            }
        }
        if(sorted==true)
        {
            break;
        }
        
    }
    for(int x=0;x<n;x++)
    {
        cout<<arr[x]<<" ";
    }

    return 0;
}
