
class Solution {
public:
    bool rec(TreeNode* root,int x){
        if(!root)
        return false;

        if(root->left==NULL and root->right==NULL)
        {
            if(x==root->val)
            return true;
        }

        return rec(root->left,x-root->val) || rec(root->right,x-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return rec(root,targetSum);
    }
};