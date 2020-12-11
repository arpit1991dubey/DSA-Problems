#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{ 

if(l<r)
{
        int m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            return binarySearch(arr,m+1,r,x); 
        else
            return binarySearch(arr,l,m-1,x); 
}
    return -1; 
} 
int main()
{
    int n;
   
    cout<<"Enter the length of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the arrya now";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the elememt to be searched for";
    int ele;
    int index=-1;
    cin>>ele;
    int result=binarySearch(arr,0,n-1,ele);
    (result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result; 
    return 0;
}
