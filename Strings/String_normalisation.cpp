/******************************************************************************

normalize the strint  - convert a string from-MY NAME is ArpIT to My Name Is Arpit

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

string normalize( string copy) {
   // string copy = sentence;
    transform(copy.begin(), copy.end(), copy.begin(), ::tolower) ; 
    stringstream ss(copy);
    string token;
    string tokens;
    while(getline(ss,token,' '))
    {
        token[0] = toupper(token[0]);
        tokens+=token+" ";
    }
    //Make the changes in copy, and return it
    
    

    return tokens;
}
int main()
{
    string big,small;
    cout<<"Enter the bigger string";
    getline(cin,big);
    cout<<normalize(big);
    return 0;
}
