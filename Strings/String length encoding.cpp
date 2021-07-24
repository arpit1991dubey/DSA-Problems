/******************************************************************************

String length encoding - convert a string from- aaaaabbbsss to a5b3s3

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

bool uniqueCharacters(string str)
{
 
    // Using sorting
    sort(str.begin(), str.end());
 
    for (int i = 0; i < str.length()-1; i++) {
 
        // if at any time, 2 adjacent
        // elements become equal,
        // return false
        if (str[i] == str[i + 1]) {
            return false;
        }
    }
    return true;
}

//str is the input the string
string compressString(const string &str){   
    //complete the function to return output string
    string stri=str;
    int count=0;
    map<char,int>store;
    for(int i=0;i<stri.length();i++)
    {
        store[stri[i]]++;
    }
    string res="";
    for(auto x:store)
    {
        if(uniqueCharacters(stri))
        {
                res=stri;
        }
            else
            {
                        res=res+x.first+to_string(x.second);
            }
    }
   return res;
}
