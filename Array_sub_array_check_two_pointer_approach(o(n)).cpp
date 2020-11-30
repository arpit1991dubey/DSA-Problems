#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

bool issubarray(int parent[],int sub[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(parent[i]==sub[j])
        {
            i++;
            j++;
            if(j==m)
            {
                return true;
            }
        }
        else
        {
            i=i-j+1;
            j=0;
        }
    }
    return false;
}

int main()
{
     int n,m;
    cout<<"Enter the length of parent array";
    cin>>n;
    cout<<"Enter the length of sub array";
    cin>>m;
    int parent[n];
    int sub[m];
    cout<<"Enter the parent array"<<endl;
    
    for(int k=0;k<n;k++)
    {
        cin>>parent[k];
    }
    cout<<"Enter the sub array"<<endl;
    
    for(int k=0;k<m;k++)
    {
        cin>>sub[k];
    }
    
    if(issubarray(parent,sub,n,m))
    {
        cout<<"issubarray True";
    }
    else
    {
        cout<<"issubarray False";
    }
}
