
class Solution {
public:
    bool check(TreeNode* r,TreeNode* l){
        if(l==nullptr and r==nullptr)
        return true;

        if(l ==nullptr || r==nullptr)
        return false;

        return r->val==l->val && check(r->left,l->right) && check(r->right,l->left);
    }
    bool isSymmetric(TreeNode* root) {

        return check(root->left,root->right);
    }
};