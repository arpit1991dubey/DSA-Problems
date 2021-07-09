//find the minimum element in the given BST.
int minValue(Node* root)
{
    Node* current = root; 
  
/* loop down to find the leftmost leaf */
while (current->left != NULL) 
{ 
    current = current->left; 
} 
return(current->data); 
}
