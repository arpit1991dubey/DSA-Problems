#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int fibon(int n)
{
    if(n==1||n==0)
    {
        return n;
        
    }
    else
    {
        return fibon(n-1)+fibon(n-2);
    }
}

int main()
{
    int n;
    cin>>n;
    int f = fibon(n-1);
    cout<<f;

    return 0;
}
