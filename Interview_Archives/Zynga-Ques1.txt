/*
Given an array of integers of length "n" find the maximum consecutive subarray's length such that the product of the subarry is never equal to zero.
Input : n=6,arr=[1,0,2,5,0,6]
Output: 2

Input: n=6,arr=[1,0,8,5,6,0]
Output: 3

*/

#include <bits/stdc++.h>
using namespace std;
int maxconpro(int arr[],int n)
{
    int count=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
    if(arr[i]==0)
    {
        count=0; //reset the counter to zero whenever we see a zero;
    }
    else
    {
        count++; //keep incrementing the counter in case we encounter non zero elements
        mx=max(mx,count);//find the maximum of all the countiguous count values
    }
    }
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=maxconpro(arr,n);
    cout<<res;
    return 0;
}
