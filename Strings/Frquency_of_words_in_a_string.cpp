/******************************************************************************

Find frequency of each word in a string

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using  namespace std;
int main()
{
    string str="Arpit is going Arpit";
    vector<string>store;
    stringstream ss(str);
    string token;
    while(getline(ss,token,' '))
    {
        store.push_back(token);
    }

map<string,int> freq;
for(int i=0;i<store.size();i++)
{
    freq[store[i]]++;
}

for(auto it:freq)
{
    if(it.second>1)
    {
        cout<<it.first;
    }
}
    return 0;
}
