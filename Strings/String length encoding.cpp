/******************************************************************************

String length encoding - convert a string from- aaaaabbbsss to a5b3s3

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
string compressString(string str){   
    //complete the function to return output string
    
    map<char,int>store;
    for(int i=0;i<str.length();i++)
    {
        store[str[i]]++;
    }
    string res="";
    for(auto x:store)
    {
        res=res+x.first+to_string(x.second);

    }
    
   return res;
}
int main()
{
    string big,small;
    cout<<"Enter the bigger string";
    getline(cin,big);
    cout<<compressString(big);
    return 0;
}
