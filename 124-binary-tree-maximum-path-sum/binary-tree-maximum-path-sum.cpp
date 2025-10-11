
class Solution {
public:
    int f(TreeNode* root,int& ans)
    {
        if(!root)
        return 0;
        
        int l=f(root->left,ans);
        int r=f(root->right,ans);
        
        int temp=root->val;
        if(l>0)
        temp+=l;
        if(r>0)
        temp+=r;
        
        ans=max(ans,temp);
        
        return max({0,l,r})+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        f(root,ans);
        return ans;
    }
};