## Question link - https://www.hackerrank.com/challenges/permutation-equation/problem

```
vector<int> permutationEquation(vector<int> p) {
    vector<int>store;
    int n=p.size();
    int index;
    int index2;
    for(int i=1;i<=n;i++)
    {
        auto it = find(p.begin(), p.end(), i);
        index=it-p.begin()+1;
        auto it2 = find(p.begin(), p.end(), index);
        index2=it2-p.begin()+1;
        store.push_back(index2);
    }
return store;
}

```
