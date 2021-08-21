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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        int level=1;
        vector<vector<int>> ans;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty())
        {
            int s=qu.size();
            vector<int> temp;
            while(s--)
            {
                TreeNode* t=qu.front();
                qu.pop();
                temp.push_back(t->val);
                if(t->left)qu.push(t->left);
                if(t->right)qu.push(t->right);
            }
            if(level%2==0)
            {
                reverse(temp.begin(),temp.end());
            }
            ans.push_back(temp);
            level++;
        }
        return ans;
    }
};
