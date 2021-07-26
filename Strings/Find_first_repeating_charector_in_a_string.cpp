#include<bits/stdc++.h>
using namespace std;


char firstRepeatChar(string input){
    map<char,int> freq;
    for(int i=0;i<input.length();i++)
    {
        freq[input[i]]++;
    }
    for(auto i:freq)
    {
        if(i.second>1)
        {
            return i.first;
        }
    }
    
    return '\0';
    
}
