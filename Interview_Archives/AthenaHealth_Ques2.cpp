/******************************************************************************

Printing Clock
*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int pos=0;
    int tim=0;
    for(int i=0;i<str.length();i++)
    {
        int  curr_pos=str[i]-65;
        int diff=abs(curr_pos-pos);
        pos=curr_pos;
        if(diff>13)
        {
            tim+=26-diff;
        }
        else
        {
            tim+=diff;
        }
    }
    cout<<tim;

    return 0;
}
