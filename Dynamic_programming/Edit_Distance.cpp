class Solution {
  public:
    int editDistance(string s, string t) {
        int m=s.length();
        int n=t.length();
        int memo[m+1][n+1];
        memset(memo,-1,sizeof(memo));
        if(memo[m][n]!=-1)
        {
            return memo[m][n];
        }
        else
        {
            for(int i=1;i<=m;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if (i == 0)
                        memo[i][j] = j;
                    else if (j == 0)
                         memo[i][j] = i;
                    else if(s[i-1]==t[j-1])
                    {
                        memo[i][j]=memo[i-1][j-1];
                    }
                    else
                    {
                        memo[i][j]=1+min(memo[i-1][j],memo[i][j-1],memo[i-1][j-1]);
                    }
                        
                }
            }
            
        }
        // Code here
        return memo[m][n];
    }
};
