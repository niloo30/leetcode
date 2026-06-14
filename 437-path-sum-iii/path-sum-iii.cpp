
class Solution {
public:
    #define ll long long 
    int ans=0;
    void helper(TreeNode* root,ll x)
    {
        if(!root)
        return ;


        if(root->val==x)
        {
            ans++;
        }
        x-=root->val;
        helper(root->left,x);
        helper(root->right,x);
    }
    void rec(TreeNode* root,ll target){
        if(!root)
        return ;

        helper(root,target);
        rec(root->left,target);
        rec(root->right,target);
    }
    int pathSum(TreeNode* root, int targetSum) {
        
        rec(root,targetSum);
        return ans;
    }
};