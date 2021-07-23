/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string str;
    // getline(cin,str); // Takes input of string with a space present after each word
    // getline(cin,str,'.');// Terminate the string when  a '.' is encountered
    // cout<<str<<" *** ";
    //store the vector of strings of length n
    int n=5;
    vector<string>vecstr; //Vector of string 
    string temp;
    while(n--)
    {
        cin>>temp;
        vecstr.push_back(temp);
    }
    
    reverse(vecstr.begin(),vecstr.end()); //reverse the entire vector of stings 
    for(auto x:vecstr)
    {
        cout<<x<<" ";
    }
    return 0;
}
