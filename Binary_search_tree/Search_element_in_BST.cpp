#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
   int key;
   Node *left;
   Node *right;

   Node(int key){
       this->key = key;
       left = right  = NULL;
   }
};


bool isPresent(Node * root,int key){
    while (root != NULL) {
        // pass right subtree as new tree
        if (key > root->key)
            root = root->right;
 
        // pass left subtree as new tree
        else if (key < root->key)
            root = root->left;
        else
            return true; // if the key is found return 1
    }
    return false;
}
