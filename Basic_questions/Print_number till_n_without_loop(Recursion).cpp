
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void printnos(int n)
{
    if(n==0)
    {
        return;
        
    }
    else
    {
        cout<<n<<endl;
        printnos(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    printnos(n);

    return 0;
}
