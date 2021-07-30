/******************************************************************************

Count number of bits to be flipped to convert A to B
Input : a = 10, b = 20
Output : 4
Binary representation of a is 00001010
Binary representation of b is 00010100
We need to flip highlighted four bits in a
to make it b.

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n &= (n-1);
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int c=a^b;
    int res=countSetBits(c);
    cout<<res;

    return 0;
}
