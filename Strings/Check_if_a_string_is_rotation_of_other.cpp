#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter original string";
    cin>>str1;
    cout<<"Enter rotated string";
    cin>>str2;
    string temp=str1+str1;
    if(temp.find(str2)!=string::npos)
    {
        cout<<"Is Rotaion of the string";
    }
    else
    {
        cout<<"Is not rotation of the string";
    }
   
    return 0;
}
