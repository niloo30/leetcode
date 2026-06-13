
class Solution {
public:
    void rec(TreeNode* root)
    {
        if(!root)
        return ;


        swap(root->right,root->left);
        rec(root->left);
        rec(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        
        rec(root);

        return root;
    }
};