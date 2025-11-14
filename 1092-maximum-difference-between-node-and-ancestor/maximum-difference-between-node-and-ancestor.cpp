
class Solution {
public:
    int f(TreeNode* root,int mn,int mx)
    {
        if(!root)
        return (mx-mn);


        mn=min(mn,root->val);
        mx=max(mx,root->val);

        return max(f(root->left,mn,mx),f(root->right,mn,mx));
    }
    int maxAncestorDiff(TreeNode* root) {

        if(!root)
        return 0;


        return f(root,1e9,-1e9);
        
    }
};