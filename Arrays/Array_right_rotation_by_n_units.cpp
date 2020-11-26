/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void rightrotbyone(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--)
        arr[i]=arr[i-1];
    
    arr[0]=temp;
}

void rotaten(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
    {
        rightrotbyone(arr,n);
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
    cout<<"Enter the number of right rotations";
    cin>>d;
    rotaten(arr,n,d);
    printarr(arr,n);
    
    return 0;
}
