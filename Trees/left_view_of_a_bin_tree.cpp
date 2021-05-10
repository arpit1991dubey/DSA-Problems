vector<int> leftView(Node *root)
{
 vector<int>res;
 queue<Node*>q;
 if(root==NULL)
 {
     return res;
 }
 q.push(root);
 while(!q.empty())
 {
     int n=q.size();
     for( int i=0;i<n;i++)
     {
         Node *curr=q.front();
         q.pop();
         if(i==0)
         {
             res.push_back(curr->data);
         }
         if(curr->left!=NULL)
         {
             q.push(curr->left);
         }
         if(curr->right!=NULL)
         {
             q.push(curr->right);
         }
     }
 }
 return res;
   // Your code here
}
