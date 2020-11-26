
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void leftrotbyone(int arr[],int n)
{
     int temp=arr[0];
    for(int i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    
    arr[n-1]=temp;
}

void rotaten(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
    {
        leftrotbyone(arr,n);
    }
}
void printarr(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }

}
int main()
{
    int n,arr[n],d;
    cout<<"Enter length of the array";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of left rotations";
    cin>>d;
    rotaten(arr,n,d);
    printarr(arr,n);
    
    return 0;
}
