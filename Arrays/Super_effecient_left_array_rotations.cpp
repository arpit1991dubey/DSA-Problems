#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n;
    int arr[n];
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter number of rotations";
    cin>>k;
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
    for(int i=k;i<k+n;i++)
   {
       cout<<arr[i%n]<<" ";
   }

    return 0;
}


/*
vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int>rotated(arr.size());
    int j=0;
    int n=arr.size();
    for(int i=d; i<n+d && j<n;i++)
    {
        rotated[j++]=arr[i%n];
    }
return rotated;
}*/
