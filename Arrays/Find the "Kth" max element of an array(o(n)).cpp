#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int arr[n];
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter the k'th largest number you want";
    cin>>k;
    cout<<"Enter the array elements";
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   
    cout<<arr[n-k];
  


    return 0;
}
