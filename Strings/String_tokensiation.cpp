
/*
String tokenisation-> Convert - "I have a white dog " to " I, Have, a , white, dog"

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cout<<"Enter the string and press enter ";
    getline(cin,input);
    int index;
    stringstream ss(input);
    string token;
    vector<string>tokens;
    while(getline(ss,token,' '))
    {
        tokens.push_back(token);
    }
    for(auto x:tokens)
    {
        cout<<x<<",";
    }
    
}
