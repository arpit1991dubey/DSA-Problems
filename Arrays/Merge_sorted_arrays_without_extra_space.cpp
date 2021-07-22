/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void mergesortedarray(int arr1[],int n1,int arr2[],int n2)
{
    for(int i=0;i<n1;i++)
    {
        if(arr1[i]>arr2[0])
        {
            swap(arr1[i],arr2[0]);
            sort(arr2,arr2+n2);
        }
    }
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
    int n2;
    cout<<"Enter length of second array";
    cin>>n2;
    cout<<"Enter the second array values now";
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    mergesortedarray(arr,n,arr2,n2);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n'<<endl;
     for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}
