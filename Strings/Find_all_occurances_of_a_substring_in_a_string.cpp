/******************************************************************************
//Find all the occourances of a paticular word in a string

*******************************************************************************/
//Approach 1-Using for loops
// #include <stdio.h>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cout<<"Enter the string and press enter ";
//     getline(cin,str);
//     int findex,nextindex;
//     string srh;
//     cout<<"Enter the string to be searched ";
//     getline(cin,srh);
//     findex=str.find(srh);
//     cout<<"Element found at index "<<findex<<endl;

//   for(int i=findex+1;i<str.length();i+=nextindex+1)
//     {
//         nextindex=str.find(srh,i);
//         if(nextindex!=-1)
//         {
//             cout<<"Element found at index "<<nextindex<<endl;

//         }
//         // index=str.find(srh,index+1);
//         // cout<<"Next occourance found at index "<<index<<endl;
//     }
//     return 0;
// }


//Approach 2 (simple) using while loop

#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string big;
    cout<<"Enter the string and press enter ";
    getline(cin,big);
    string small;
    cout<<"Enter the string to be searched ";
    getline(cin,small);
    vector<int> result = {};
    int index = big.find(small);
    while(index!=-1){
    	result.push_back(index);
    	index = big.find(small,index+1);
    }
    cout<<"The occurance of "<< small << " are at indexes ";
    for(auto x:result)
      cout<< x<< " , ";
      return 0;
}
