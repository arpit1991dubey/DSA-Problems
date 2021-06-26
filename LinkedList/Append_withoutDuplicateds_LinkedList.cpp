#include <iostream>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
   Node(int x)
   {
       data=x;
       next=NULL;
   }
};
bool search(struct Node *head,int val)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
/* insert new node at the end of the linked list */
void append(struct Node** head, int node_data)
{
/* 1. create and allocate node */
struct Node* newNode = new Node(node_data);
 
struct Node *last = *head; 

/* 4. if list is empty, new node becomes first node */
if (*head == NULL)
{
*head = newNode;
return;
}
 
/* 5. Else traverse till the last node */
while (last->next != NULL)
last = last->next;
 
/* 6. Change the next of last node */
 if(search(*head,node_data))
 {
   return;
 }
  else
  {
   last->next = newNode;
  }
return;
}
 
// display linked list contents
void displayList(struct Node *node)
{
   //traverse the list to display each node
   while (node != NULL)
   {
      cout<<node->data<<"\n";
      node = node->next;
   }

} 


/* main program for linked list*/
int main() 
{ 
/* empty list */
struct Node* head = NULL; 
 int num;
  int count=0;
 while(true)
  {
    cin>>num;
   	count++;
   	if(num<0 && count==1)
      cout<<"List is empty";
    if(num<0)
      break;
    else
      append(&head, num);
  }
displayList(head);
 
return 0;
}
