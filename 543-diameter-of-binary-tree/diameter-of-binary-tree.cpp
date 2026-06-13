
class Solution {
public:
    int ans=0;
    int h(TreeNode* root)
    {
        if(!root)
        return 0;

        return 1+max(h(root->left),h(root->right));
    }
    void f(TreeNode* root)
    {
        if(!root)
        return ;


        ans=max(ans,h(root->left)+h(root->right));
        f(root->left);
        f(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {

        f(root);
        return ans;
        
    }
};