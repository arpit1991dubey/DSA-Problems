vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>arr;
    if (root==NULL)
        return arr;
    stack<Node*>st;
    st.push(root);
    while(st.size()!=0)
    {
        root=st.top();
        st.pop();
        arr.push_back(root->data);
        if(root->right!=NULL)
        {
            st.push(root->right);
        }
        if(root->left!=NULL)
        {
            st.push(root->left);
        }
    }
    return arr;
}
