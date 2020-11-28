#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,n;
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
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
           // count++;
            
        }
    }
    while(count<n)
    {
        arr[count++]=0;
        //count++;
    }
  for(int i=0;i<n;i++)
  {
      cout<<arr[i];
  }
    return 0;
}
