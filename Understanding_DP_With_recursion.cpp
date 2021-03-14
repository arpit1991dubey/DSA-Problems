#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
//Below function written on recursion
// int fib(int n)
// {
//     if(n<=1)
//     {
//         return n;
//     }
//     else
//     {
//         return fib(n-1) + fib(n-2);
//     }
// }
//below function written on DP(bottom up approach)
int fib(int n)
{
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
int main()
{
    
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
