
class Solution {
public:
    int rec(TreeNode* root,int val)
    {
        if(!root)
        return 0;


        val=2*val+root->val;

        if(root->left==nullptr and root->right==nullptr)
        return val;

        return rec(root->left,val)+rec(root->right,val);
    }
    int sumRootToLeaf(TreeNode* root) {

        return rec(root,0);
        
    }
};