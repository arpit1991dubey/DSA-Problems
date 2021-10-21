class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string>tmp;
        string str="";
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='.')
            {
                tmp.push_back(str);
                str="";
            }
            else
            {
                str+=S[i];
            }
        }
        tmp.push_back(str);
        string res;
        for(int i=tmp.size()-1;i>0;i--)
        {
            res=res+tmp[i]+".";
        }
        res=res+tmp[0];
        return res;
        // code here 
    } 
};
