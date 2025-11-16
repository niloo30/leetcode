
class Solution {
public:
    bool f(TreeNode* p,TreeNode* q){
        if(!p and !q)
        return true;

        if(!p or !q)
        return false;

        return (p->val==q->val) && f(p->left,q->right) && f(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {

        if(!root)
        return true;

        return f(root->left , root->right);
        
    }
};