#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s1="";
    cin>>s1;
    map <char , int> freq;
    for(int i=0;i<s1.length();i++)
    {
        freq[s1[i]]++;
    }
    for(auto it: freq)
    {
        if(it.second>1)
        {
            cout<<it.first <<" has a frequency of "<<it.second<<'\n';
        }
    }
    return 0;
}
