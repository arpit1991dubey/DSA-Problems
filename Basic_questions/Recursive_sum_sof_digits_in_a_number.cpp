#include <iostream>
using namespace std;
int digitsum(int n)
{
    if(n<10)
    {
        return n;
    }
    else
    {
        return digitsum(n/10)+n%10;
    }
}
int main()
{
    int ele;
    cin>>ele;
    int sum = digitsum(ele);
    cout<<sum;
    
    return 0;
}
