
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=-1;
    int n,m;
    cout<<"Enter length of array 1";
    cin>>n;
    cout<<"Enter the array";
     int arr1[n];int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter length of array 2";
    cin>>m;
    cout<<"Enter the array";
      for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
 

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] > arr2[j]) {
            j++;
        }
        else if (arr2[j] >arr1[i]) {
            i++;
        }
        else {
             
            // when both are equal
            cout << arr1[i] << " ";
            flag=1;
            i++;
            j++;
        }
    }
    if(flag==-1)
    {
        cout<<"No common element found";
    }

    return 0;
}
