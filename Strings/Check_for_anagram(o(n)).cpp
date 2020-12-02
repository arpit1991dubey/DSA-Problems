#include <stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool ana(string str,string str2)
{
    if(str.length()!=str2.length())
    {
        return false;
    }
    int count=0;
    for(int i=0;i<str.length();i++)
    {
      count+=str[i];
    }
     for(int i=0;i<str2.length();i++)
    {
      count-=str2[i];
    }
    
    if(count!=0)
    {
        return false;
    }
    else
    {
        return true;
    }
     

}
int main() {
   
    string str,str2;
    cin>>str;
    cin>>str2;
    if(ana(str,str2))
    {
        cout<<"Anagram";
    }
    else
    {
        cout<<"Not anagram";
    }
	return 0;
}