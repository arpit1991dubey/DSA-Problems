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
    cout<<"Enter the element to be searched";
    int key;
    cin>>key;
    int freq=upper_bound(arr,arr+n,key)-lower_bound(arr,arr+n,key);
    cout<<freq;
    return 0;
}
