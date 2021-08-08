/******************************************************************************

Given a string as input replace all the duplicate charecters by their immediate succesor charector.

Input-: creepfe
Output-: crefpgh
//e-->f || e-->f || f-->g || g-->h


*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void repl(string str)
{
    int n=str.length();
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
               
                temp=int(str[j])+1;
                str[j]=char(temp);

            }
        }
    }
    cout<<str;
  
}
int main()
{
    string str;
    cin>>str;
    repl(str);
    return 0;
}
