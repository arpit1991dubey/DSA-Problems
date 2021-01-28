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
void printlist(Node *head)
{
    Node *arr=head;
    while(arr!=NULL)
    {
        cout<<arr->data<<" ";
        arr=arr->next;

    }

}
int main()
{
    Node *head=new Node(20);
    head->next=new Node(30);
    head->next->next=new Node(40);
    printlist(head);
}
