
class Solution {
public:
    int ans=0;
    void rec(int amt,TreeNode* root)
    {
        if(root==NULL)
        return ;

        ans=max(ans,abs(amt-root->val));

        rec(amt,root->left);
        rec(amt,root->right);
    }
    int f(TreeNode* root)
    {
        if(!root)
        return ans;

        rec(root->val,root->left);
        rec(root->val,root->right);

        return max(f(root->left),f(root->right));

        return ans;
    }
    int maxAncestorDiff(TreeNode* root) {
        

        if(root==NULL)
        return 0;


        return f(root);
    }
};