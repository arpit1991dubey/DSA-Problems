
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    int arr[n];
    cout<<"Enter length of an aray";
    cin>>n;
    cout<<"Enter elements of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=count)
            {
            swap(arr[i],arr[count]);
            
            }
            count++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
