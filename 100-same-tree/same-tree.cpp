
class Solution {
public:
    bool check(TreeNode* p,TreeNode* q){
        if(p==nullptr and q==nullptr)
        return true;

        if(p==nullptr || q==nullptr)
        return false;

        return p->val== q->val && check(p->left,q->left) && check (p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return check(p,q);
        
    }
};