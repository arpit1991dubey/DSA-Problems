#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    unordered_map<char,int> mp;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
        
    }
  for (auto it : mp) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }

    return 0;
}
