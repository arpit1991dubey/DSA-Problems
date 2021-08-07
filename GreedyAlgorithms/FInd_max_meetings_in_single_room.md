## Question link - https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
# Solution-:
```

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
     struct meeting
    {
        int start;
        int end;
        int pos;
        
    };
   
    static bool comparator(struct meeting m1, struct meeting m2)
    {
        if(m1.end<m2.end) return true;
        if(m1.end>m2.end) return false;
        if(m1.pos<m2.pos) return true;
        return false;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int count=0;
        struct meeting meet[n];
        for(int i=0;i<n;i++)
        {
            meet[i].start=start[i];
            meet[i].end=end[i];
            meet[i].pos=i+1;
        }
        sort(meet,meet+n,comparator);
        int limit=meet[0].end;
        count++;
        for(int i=1;i<n;i++)
        {
            if(meet[i].start> limit)
            {
               
                limit=meet[i].end;
                count++;
            }
        }
       return count; 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
```
