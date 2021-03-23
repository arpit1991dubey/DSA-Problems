
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int MinDiff(int arr[], int n, int m)
{
    // if there are no chocolates or number
    // of students is 0
    if (m == 0 || n == 0)
        return 0;
 
    // Sort the given packets
    sort(arr, arr + n);
 
    // Number of students cannot be more than
    // number of packets
    if (n < m)
        return -1;
 
    // Largest number of chocolates
    int min_diff = INT_MAX;
 
    // Find the subarray of size m such that
    // difference between last (maximum in case
    // of sorted) and first (minimum in case of
    // sorted) elements of subarray is minimum.
 
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff< min_diff)
            min_diff = arr[i + m - 1] - arr[i];
    }
    return min_diff;
}
int main()
{
    int n,m;
    int res=0;
    int min= INT_MAX;
    cout<<"Enter length of array";
    cin>>n;
    int arr[n];
    cout<<"Enter value of m";
    cin>>m;
    cout<<"Enter the araay values";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<MinDiff(arr,n,m);
    return 0;

}
