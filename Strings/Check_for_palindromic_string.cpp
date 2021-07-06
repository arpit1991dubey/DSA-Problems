class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    string temp=S;
	    int start=0;
	    int end=S.length()-1;
	    while(start<end)
	    {
	        swap(S[start],S[end]);
	        start++;
	        end--;
	    }
	    if(temp==S)
	    {
	        return 1;
	    }
	    return 0;
	    // Your code goes here
	    
	}

};
