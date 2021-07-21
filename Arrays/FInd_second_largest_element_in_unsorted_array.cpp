#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int secondLargest(int arr[], int n) {
    int largest = 0, secondLargest = INT_MIN;
 
    // finding the largest element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
 
    for(int i=0;i<n;i++)
    {

        if(i==largest)
        {
            continue;
        }
        secondLargest=max(secondLargest,arr[i]);

    }
 
 
 
 
    return secondLargest;
    
}
 
 
int main() {
    int arr[] = {10, 12,450,4,200,999};
    int n = sizeof(arr)/sizeof(arr[0]);
    int second_Largest = secondLargest(arr, n);
    if (second_Largest == -1)
        cout << "Second largest didn't exit\n";
    else
        cout << "Second largest : " << second_Largest;
}
