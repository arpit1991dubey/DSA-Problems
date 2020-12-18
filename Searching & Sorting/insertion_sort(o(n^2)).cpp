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
    for(int i=1;i<n-1;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=key;
    }
    for(int x=0;x<n;x++)
    {
        cout<<arr[x]<<" ";
    }

    return 0;
}
