
class Solution {
public:
    #define ll long long 
    int mod=1e9+7;
    ll sum=0;

    ll ans=0;
    ll sumoftree(TreeNode* root)
    {
        if(!root)
        return 0;

        return root->val+sumoftree(root->left)+sumoftree(root->right);
    }

    ll f(TreeNode* root )
    {
        if(!root)
        return 0;

        ll val=root->val+f(root->left)+f(root->right);

        ans=max(ans, (val*(sum-val)));

        return val;
    }
    int maxProduct(TreeNode* root) {
        
        sum=sumoftree(root);

        f(root);

        return ans%mod;
    }
};