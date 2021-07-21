#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int kthLargest(int arr[], int n,int k) {
    
    set<int> s(arr, arr + n);
    set<int>::iterator itr= s.begin(); // s.begin() returns a pointer to first
                     // element in the set
    advance(itr, n-k - 1); // itr points to kth element in set
    return  *itr;
    
}
 
 
int main() {
    int arr[] = {10, 12,450,4,200,999};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int k_thLargest = kthLargest(arr, n,k);
    if (k_thLargest == -1)
        cout << k<<" largest didn't exit\n";
    else
        cout << k<<" largest : " << k_thLargest;
}
