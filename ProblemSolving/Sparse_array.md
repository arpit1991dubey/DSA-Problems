## Question link ->https://www.hackerrank.com/challenges/three-month-preparation-kit-sparse-arrays/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one
# Solution-:
```
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int>store(queries.size(),0);
    for(int i=0;i<queries.size();i++)
    {
        for(int j=0;j<strings.size();j++)
        {
            if(queries[i]==strings[j])
            {
                store[i]++;
            }
        }
    }
return store;
}
```
