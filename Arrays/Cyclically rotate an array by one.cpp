#include <iostream>
using namespace std;

int main() {
    int t,n;
    int temp;
    cin>>t;
while(t--)
{
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>arr[0];
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
    }
    
        
    
	//code
	return 0;
}
