
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]!=arr[i])
        {
            arr[j++]=arr[i-1];
        }
    }
    arr[j]=arr[n-1];
    for(int i=0;i<=j;i++)
    {
        cout<<arr[i];
    }
    //printf("Hello World");

    return 0;
}
