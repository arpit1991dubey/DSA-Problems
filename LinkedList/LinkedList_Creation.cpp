#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
Node(int x)
{
    data=x;
    next=NULL;
}
};
int main()
{
    Node *head=new Node(20);
    head->next=new Node(30);
    cout<<head->data;

    return 0;
}