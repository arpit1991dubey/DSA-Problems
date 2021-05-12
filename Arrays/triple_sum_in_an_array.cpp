#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A + n);
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int current = A[i]+A[l]+A[r];
                if(current==X)
                {
                    return true;
                }
                else if(current<X)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return false;
    }
int main()
{
    int n,X;
    cout<<"Enter the lenth of array -: ";
    cin>>n;
    cout<<"Enter the sum value -: ";
    cin>>X;
    int A[n];
    cout<<"Enter the array -: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<find3Numbers(A,n,X);
    return 0;
}
