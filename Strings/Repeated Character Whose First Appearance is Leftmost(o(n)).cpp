#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define max_chars 256
int main()
{
    bool freq[max_chars];
    string str="";
    cin>>str;
    int res=-1;
    for(int i=0;i<max_chars;i++)
    {
        freq[i]=false;
    }
    for(int i=str.length()-1;i>=0;i--)
    {
        if(freq[str[i]]==false)
        {
            freq[str[i]]=true;
        }
        else
        {
            res=i;
        }
    }
    if(res=-1)
    {
        cout<<"No repeated values found";
    }
    else
    {
    cout<<str[res]<<" Is repeated at index "<<res;
    }
    
}
