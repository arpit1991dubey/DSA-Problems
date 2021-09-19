#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char ch;
    getline(cin,str);
    cin>>ch;
    int strtInd=-1;
    int endInd=-1;
    int space=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
        {
          if(strtInd==-1)
          {
              strtInd=i+1;
          }
          endInd=i+1;
        }
    }
    for(int i=strtInd;i<endInd;i++)
    {
        if(str[i]==' ')
        {
            space++;
        }
    }
    cout<<space<<" ";
    int res=endInd-strtInd-space-1;
    cout<<res;
    return 0;
}
