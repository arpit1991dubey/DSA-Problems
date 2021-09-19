#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,2,5,4,2,6,9};
    bool swaped=false;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<7-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(!swaped)
             break;
    }
    for(int k=0;k<7;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
