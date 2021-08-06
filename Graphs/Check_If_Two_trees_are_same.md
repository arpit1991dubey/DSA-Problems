## Problem Link - https://leetcode.com/problems/same-tree/

# Solution-:
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q ==NULL)
            return true;
        if(p==NULL or q ==NULL)
            return false;
        queue<TreeNode*> q1,q2;
        q1.push(p);
        q2.push(q);
        while(!q1.empty() or !q2.empty()){
            TreeNode* temp1 = q1.front();
            TreeNode* temp2 = q2.front();
            q1.pop();
            q2.pop();
            if(temp1->val != temp2->val)
                return false;
            if(temp1->left)
                q1.push(temp1->left);
            if(temp2->left)
                q2.push(temp2->left);
            if(q1.size()!=q2.size())
                return false;
            if(temp1->right)
                q1.push(temp1->right);
            if(temp2->right)
                q2.push(temp2->right);
            if(q1.size()!=q2.size())
                return false;
        }
        return true;
    }
};
