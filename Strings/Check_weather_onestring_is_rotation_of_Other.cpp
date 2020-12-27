#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    
    cin>>str;
    string str2;
    cin>>str2;
    string temp=str+str2;
    if(str.length()!=str2.length())
    {
        cout<<"Not rotated";
    }
    else if(temp.find(str2))
    {
        cout<<"Rotated String";
    }
    else
    {
        cout<<"Not rotated";
    }
    return 0;
}
