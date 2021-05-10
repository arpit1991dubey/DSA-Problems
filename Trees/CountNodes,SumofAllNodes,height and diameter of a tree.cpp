
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
int countnoofnodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return countnoofnodes(root->left)+countnoofnodes(root->right)+1;
    }
}

int sumofnodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return sumofnodes(root->left)+sumofnodes(root->right)+root->key;
    }
}
int heightofbinarytree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else{
        return 1+max(heightofbinarytree(root->left),heightofbinarytree(root->right));
    }
}
int diameteroftree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int lheight(heightofbinarytree(root->left));
        int rheight(heightofbinarytree(root->right));
        int rootdiameter = lheight+rheight+1;
        int ldiameter = diameteroftree(root->left);
        int rdiameter =diameteroftree(root->right);
        return max(rootdiameter,max(ldiameter,rdiameter));
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
    
    cout<<countnoofnodes(head);
    cout<<'\n';
    cout<<diameteroftree(head);
    

    return 0;
}
