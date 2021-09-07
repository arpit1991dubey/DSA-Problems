/******************************************************************************

Merge sort
*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int start,int end)
{
    int i=start;
    int mid=(start+end)/2;
    int j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else if(arr[j]<arr[i]){
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    int k=0;
    for(int idx=start;idx<=end;idx++)
    {
        arr[idx]=temp[k++];
    }
    return;
}
void mergeSort(vector<int>&arr,int start,int end)
{
    if(start>=end){
        return;
    }
   
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        return merge(arr,start,end);

}
int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    int s = 0;
	int e = arr.size()-1;
  	mergeSort(arr,s,e);
	for(int x : arr){
		cout<< x <<",";
	}
	return 0;
}
