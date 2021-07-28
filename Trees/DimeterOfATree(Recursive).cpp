class Solution {
public:
    int height(TreeNode* root){ 
        if(!root) 
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        return (max(lh, rh) + 1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int d1=height(root->left)+height(root->right);
        int d2=diameterOfBinaryTree(root->left);
        int d3=diameterOfBinaryTree(root->right);
        
        return max(d1,max(d2,d3));
    }
};
