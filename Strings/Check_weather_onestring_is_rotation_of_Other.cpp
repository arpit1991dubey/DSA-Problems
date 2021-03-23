#include <stdio.h>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
string str1,str2;
cout<<"Enter first string";
cin>>str1;
cout<<"Enter second string";
cin>>str2;
string temp=str1+str1;
if(str1.length()!=str2.length())
    {
        cout<<"Not rotated";
    }
if(temp.find(str2)!= string::npos)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}
}
