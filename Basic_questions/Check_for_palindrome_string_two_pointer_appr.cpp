

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str="";
    cin>>str;
    string tmp=str;
    int i=0,j=str.length()-1;
    while(j>i)
    {
        swap(tmp[i],tmp[j]);
        i++;
        j--;
    }
    if(tmp==str)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not plindrome";
    }
    
    return 0;
}
