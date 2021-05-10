class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> lol ;
        if(node==NULL)
        {
            return lol;
        }
        queue<Node *>q;
        q.push(node);
        q.push(NULL);
        while(q.empty()==false)
        {
            Node *node=q.front();
            q.pop();
            if(node!=NULL)
            {
                lol.push_back(node->data);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
            }
            else if(!q.empty())
            {
                q.push(NULL);
            }
        }
        return lol;
      //Your code here
    }
};
