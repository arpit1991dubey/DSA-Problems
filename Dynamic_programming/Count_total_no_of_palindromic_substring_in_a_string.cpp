class Solution {
public:
    int countSubstrings(string s) {
        
        bool dp[s.length()+1][s.length()+1];
        long long count=0;
        for(int g=0;g<s.length();g++)
        {
            for(int i=0,j=g;j<s.length();i++,j++)
            {
                if(g==0)
                {
                    dp[i][j]=true;
                    count++;
                }
                else if(g==1)
                {
                    if(s[i]==s[j])
                    {
                        dp[i][j]=true;
                        count++;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1]==true)
                    {
                        dp[i][j]=true;
                        count++;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
            }
            
            
            
            
        }
        
        return count;
    }
    
};
