#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b){
    pair <int,int> store;
    int n=a.size();
    int min=INT_MAX;
    int ai=0,bi=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(abs(a[i]-b[j])<min)
        {
            min=abs(a[i]-b[j]);
            ai=a[i];
            bi=b[j];
        }
        
    }
    }
    store.first=ai;
    store.second=bi;
    return store;
    //Complete this method
    
    
}
