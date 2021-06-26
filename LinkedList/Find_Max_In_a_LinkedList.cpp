#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
// A linked list node
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
last->next = newNode;
return;
}
 
// display linked list contents
void displayList(struct Node *node)
{
  int max=0;
   //traverse the list to display each node
   while (node != NULL)
   {
     if(node->data>max)
     {
       max=node->data;
     }
      node = node->next;
   }
cout<<max;
} 

/* main program for linked list*/
int main() 
{ 
/* empty list */
struct Node* head = NULL; 
 int num;
 while(true)
  {
    cin>>num;
    if(num<0)
      break;
    else
      append(&head, num);
  }
displayList(head);
return 0;
}
