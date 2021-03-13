#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int kanade (int arr[],int n)
{
    int max_so_far=0;
    int max_ending_here=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here=max_ending_here+arr[i];
        max_ending_here=max(max_ending_here,0);
        max_so_far=max(max_ending_here,max_so_far);
    }
    return max_so_far;
}
int main()
{
    int n;
  
    cout<<"Enter length of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements";
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<kanade(arr,n);
}
