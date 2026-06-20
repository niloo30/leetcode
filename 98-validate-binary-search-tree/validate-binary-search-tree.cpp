class Solution {
public:
    #define ll long long 
    bool check(TreeNode* root,ll mini , ll maxi)
    {
        if(root==nullptr)
        return true;

        if(root->val <= mini || root->val >=maxi)
        return false;

        return check(root->left,mini,root->val) && check(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
        
        return check(root,LLONG_MIN,LLONG_MAX);
    }
};