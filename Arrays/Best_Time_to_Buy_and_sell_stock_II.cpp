int Solution::maxProfit(const vector<int> &A) {
    int profit=0;
    int ele=A[0];
    int n=A.size();
    if(n==0)
        return 0;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>ele)
        {
          profit+=(A[i]-ele);
          ele=A[i];
        }
        else
        {
            ele=A[i];
        }
    }
    return profit;
}
