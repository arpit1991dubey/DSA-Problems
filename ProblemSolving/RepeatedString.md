## Problem link - https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen=true
# C++ solution below
```
long repeatedString(string s, long n) {

    int len=s.length();
    if(len==1 && s[0]=='a')
        return n;
    long long count=0;
    for (int i=0;i<s.size();i++) if (s[i]=='a') count++;
    count*=n/s.size();
    for (int i=0;i<n%s.size();i++) if (s[i]=='a') count++;
    
    return count;
}
```
