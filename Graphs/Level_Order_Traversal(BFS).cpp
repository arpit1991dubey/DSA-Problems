/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        if(root==NULL) return ans;
        queue<TreeNode*> store;
       store.push(root);
       while(store.size()!=NULL)
       {
            int n=store.size();
           vector<int>v(n,0);
           for(int i=0;i<n;i++)
           {
             TreeNode *f = store.front();
             v[i]=f->val;
              store.pop();
              if(f->left)
              {
                store.push(f->left);  
              }
               if(f->right)
               {
                   store.push(f->right);
               }
           }
           ans.push_back(v);
       }
       return ans;
    }
};
