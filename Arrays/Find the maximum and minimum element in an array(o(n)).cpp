
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int max=0;
    int min=1000;
    int arr[n];
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter the array elements";
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    cout<<max<<" ";
    cout<<min<<" ";


    return 0;
}
