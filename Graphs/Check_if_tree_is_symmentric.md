## Problem link - https://leetcode.com/problems/symmetric-tree/
# Solution -:

```
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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> Queue;
        Queue.push(root->left);
        Queue.push(root->right);
        while (Queue.size() > 0) {
            TreeNode* temp1 = Queue.front(); 
            Queue.pop();
            TreeNode* temp2 = Queue.front(); 
            Queue.pop();
            if (!temp1 && !temp2) 
                continue;
            if (!temp1 || !temp2) 
                return false;
            if (temp1->val != temp2->val) 
                return false;
            Queue.push(temp1->left);
            Queue.push(temp2->right);
            Queue.push(temp1->right);
            Queue.push(temp2->left);
        }
        return true;
    }
};
```
