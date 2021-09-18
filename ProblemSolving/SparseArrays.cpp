// Problem link -https://www.hackerrank.com/challenges/sparse-arrays/problem

//bruteforce
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> res(queries.size(),0);
    for(int i=0;i<queries.size();i++)
    {
        for(int j=0;j<strings.size();j++)
        {
            if(queries[i]==strings[j])
            {
                res[i]++;
            }
        }
    }
return res;
}

//Efficient using multiset
#include <iostream>
#include <iterator>
#include <unordered_set>
using namespace std;

int main() {
    int n, q, i;
    string str;
    unordered_multiset<string> s;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> str;
        s.insert(str);
    }
    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> str;
        cout << s.count(str) << '\n';
    }
}
