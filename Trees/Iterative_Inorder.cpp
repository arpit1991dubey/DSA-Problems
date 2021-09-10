vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>inorder;
        stack<Node*>st;
        Node *temp=root;
        if(root==NULL)
            return inorder;
        while(true){
            if(temp!=NULL)
            {
                st.push(temp);
                temp=temp->left;
            }
            else{
                if(st.empty())
                    break;
                temp=st.top();
                st.pop();
                inorder.push_back(temp->data);
                temp=temp->right;
            }
        }
        return inorder;
        
    }
