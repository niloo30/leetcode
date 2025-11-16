
class Solution {
public:
    int ans=0;
    int f(TreeNode* root,int x)
    {
        if(!root)
        return 0;

        x=10*x+root->val;
        if(!root->left and !root->right)
        {
            return x;    
        }
        ans=f(root->left,x)+f(root->right,x);
        return ans;
    }

    int sumNumbers(TreeNode* root) {

        return f(root,0);

        
        
    }
};