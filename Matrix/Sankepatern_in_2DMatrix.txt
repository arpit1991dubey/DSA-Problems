#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the no of rows of the matrix";
    cin>>m;
    cout<<"Enter the no. of columns of the matrix";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the matrix now -: ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int j=m-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
