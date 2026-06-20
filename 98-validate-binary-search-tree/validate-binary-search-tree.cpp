class Solution {
public:
    #define ll long long 
    ll prev=LLONG_MIN;
    bool check(TreeNode* root)
    {
        if(root==nullptr)
        return true;

        if(check(root->left)==false)
        return false;

        if(root->val<=prev)
        return false;

        prev=root->val;

        return check(root->right);
    }
    bool isValidBST(TreeNode* root) {
        
        return check(root);
    }
};