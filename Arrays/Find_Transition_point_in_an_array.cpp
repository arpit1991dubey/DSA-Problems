/*Given a sorted array containing only 0s and 1s, find the transition point. 


Example 1:

Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.


Example 2:

Input:
N = 4
arr[] = {0,0,0,0}
Output: -1
Explanation: Since, there is no "1",
the answer is -1.

*/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    if(arr[0]==0 && n==1)
        return -1;
    int index=0;
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>0)
        {
            index=j;
            break;
        }
        if(arr[j]==0)
        {
            count++;
            if(count==n)
            {
                return -1;
            }
        }
        
        
    }
    return index;
}
