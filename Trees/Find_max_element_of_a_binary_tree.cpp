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
int maxelementofbintree(node *root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->key,max(maxelementofbintree(root->left),maxelementofbintree(root->right)));
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
    
    cout<<maxelementofbintree(head);
    return 0;
}
