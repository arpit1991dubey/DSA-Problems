/******************************************************************************

Check if a string is a substring of another string

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
bool checksubstring(string big,string small)
{
    int i=big.length()-1;
    int j=small.length()-1;
    while(i>=0)
    {
        if(small[j]==big[i])
        {
            j--;
            i--;
        }
        else
        {
            i--;
        }
    }
    if(j==-1)
    {
        return true;
    }
    return false;
}
int main()
{
    string big,small;
    cout<<"Enter the bigger string";
    getline(cin,big);
    cout<<"Enter the smaller string";
    getline(cin,small);
   
        cout<<checksubstring(big,small);
   
    return 0;
}
