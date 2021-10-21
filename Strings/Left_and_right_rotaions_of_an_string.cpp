#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
        string str1;
        cin>>str1;
        cout<<"Rotate by what place";
        int k;
        cin>>k;
        
        int len=str1.length();
        k=k%len;
        string antik="";
        string kwise="";
        antik=str1.substr(k,len-k)+str1.substr(0,k);
        kwise=str1.substr(len-k,k)+str1.substr(0,len-k);
        cout<<"left Rotation -> ";
        cout<<antik<<endl;
        cout<<"right Rotation -> ";
        cout<<kwise<<endl;
        return 0;
}
