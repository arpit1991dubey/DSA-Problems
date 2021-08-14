## Question link- https://www.hackerrank.com/challenges/three-month-preparation-kit-mini-max-sum/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one
# Solution-:
```
sort(arr.begin(), arr.end());
long long int max_sum = 0;
long long int min_sum = 0;

for(int i=1; i<5; i++)
{
        max_sum+=arr[i];
}
for(int i=0; i<4; i++)
{
        min_sum+=arr[i];
}

cout << min_sum << " " << max_sum;

```
