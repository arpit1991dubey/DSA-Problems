/******************************************************************************

Find minimum swaps to convert the given array such that the starting half of the arrya is compltely even and the ending half is compltely 
odd.
Eg-[6,3,4,5]
Output- 1 swap([5,3,4,6])
*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<=j)
    {
        if(arr[i]%2==0 && arr[i]%2!=0)
        {
            i++;
            j--;
        }
        else if(arr[i]%2!=0 && arr[j]%2==0)
        {
            swap(arr[i],arr[j]);
            i++,j--;
            count++;
        }
        else if(arr[i]%2!=0 && arr[j]%2!=0 )
        {
            j--;
        }
        else
        {
            i++;
        }
    }
cout<<count;
    return 0;
}






/*
in the same question if asked to move odd numbers to the start and even to the end.

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<=j)
    {
        if(arr[i]%2!=0 && arr[i]%2==0)
        {
            i++;
            j--;
        }
        else if(arr[i]%2==0 && arr[j]%2!=0)
        {
            swap(arr[j],arr[i]);
            i++,j--;
            count++;
        }
        else if(arr[i]%2==0 && arr[j]%2==0 )
        {
            j--;
        }
        else
        {
            i++;
        }
    }
cout<<count;
    return 0;
}

