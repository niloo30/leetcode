
class Solution {
public:
    int h(TreeNode* root)
    {
        if(root==NULL)
        return 0;

        return 1+max(h(root->left),h(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;
        return (abs(h(root->left)-h(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right));
        
    }
};