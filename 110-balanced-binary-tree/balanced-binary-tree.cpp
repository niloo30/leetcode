
class Solution {
public:
    int h(TreeNode* root){
        if(!root) return 0;

        return 1+ max(h(root->left),h(root->right));
    }
    bool rec(TreeNode* root){
        if(!root)
        return true;
        int lh=h(root->left);
        int rh=h(root->right);

        return abs(lh-rh)<=1 && rec(root->left) && rec(root->right);
    }
    bool isBalanced(TreeNode* root) {
        
        return rec(root);
    }
};