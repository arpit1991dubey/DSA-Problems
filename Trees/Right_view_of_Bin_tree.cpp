class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int>rview;
        queue<Node*>qu;
        qu.push(root);
        if(root==NULL)
            return rview;
        while(!qu.empty())
        {
            int n=qu.size();
            for(int i=0;i<n;i++)
            {
                Node *curr=qu.front();
                qu.pop();
                if(i==n-1)
                    rview.push_back(curr->data);
                if(curr->left!=NULL)
                    qu.push(curr->left);
                if(curr->right!=NULL)
                    qu.push(curr->right);
            }
        }
        
       // Your Code here
       return rview;
    }
};
