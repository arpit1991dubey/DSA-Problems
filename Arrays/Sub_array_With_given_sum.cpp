//Arrpoach 1-o(n^2) brute force 

#include<bits/stdc++.h>
using namespace std;
void subarraywithgivensum(int arr[],int n,int target)
{
    int i,j,sum;
    for(i=0;i<n;i++)
    {
        sum=arr[i];
        for(j=i+1;j<=n;j++)
        {
            if(sum==target)
            {
                cout<<"Sum found between "<<i+1 <<" and "<<j<<" position"<<endl;
                return;
            }
            else if(sum>target || j==n)
            {
                break;
            }
            else
            {
                sum+=arr[j];
            }
        }
    }
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
    subarraywithgivensum(A,n,X);
    return 0;
}
