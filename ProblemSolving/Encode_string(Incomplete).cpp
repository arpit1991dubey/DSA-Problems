/******************************************************************************

Given an encoded string where repetitions of substrings are represented as substring followed by count of substrings. For example, if encrypted string is “ab2cd2” and k=4 , so output will be ‘b’ because decrypted string is “ababcdcd” and 4th character is ‘b’.
Note: Frequency of encrypted substring can be of more than one digit. For example, in “ab12c3”, ab is repeated 12 times. No leading 0 is present in frequency of substring. 
Examples: 
 

Input: "a2b2c3", k = 5
Output: c
Decrypted string is "aabbccc"


*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string store="";
    string temp;
    int freq;
    for(int i=0;str[i]!='\0';)
    {
        temp="";
        freq=0;
        while(str[i]>='a' && str[i]<='z')
        {
            temp.push_back(str[i]);
            i++;
        }
        while(str[i]>='1' && str[i]<='9')
        {
            freq=str[i]-'0';
            i++;
        }
        for(int j=0;j<freq;j++)
        {
            store.append(temp);
        }
    }
    cout<<store;
   // printf("Hello World");

    return 0;
}
