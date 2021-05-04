#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
void inorder(node *root)
{
    
    if(root!=NULL)
    {
        inorder(root->left);
        
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(node *root)
{
    
    
    if(root!=NULL)
    {
        
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    
    if(root!=NULL)
    {
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main()
{
    node *head=new node(10);
    head->left=new node(20);
    head->right=new node(30);
    head->left->left=new node(40);
    head->left->right=new node(50);
    head->right->right=new node(60);
    head->left->right->left=new node(70);
    head->left->right->right=new node(80);
    
    cout<<"Inorder -> ";
    inorder(head);
    cout<<"Preorder -> ";
    preorder(head);
    cout<<"Postorder -> ";
    postorder(head);
    return 0;
}
