

#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string big;
    cout<<"Enter the string and press enter ";
    getline(cin,big);
    int index;
    string fin=" ";
    string replace="%20";
    index = big.find(fin);
    while(index!=-1)
    {
        big.replace(index,1,replace);
        index=big.find(fin,index+1);
    }
 
    cout<<big;
}
