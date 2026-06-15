
class Solution {
public:
    int ans=0;
    void rec(TreeNode* root,int& x){
        
        if(!root)
        {
            return  ;
        }
        x=10*x+root->val;
        if(!root->left and !root->right)
        {
            ans+=x;
            x/=10;
            return ;
        }
        
        rec(root->left,x);
        rec(root->right,x);
        x/=10;

    }
    int sumNumbers(TreeNode* root) {
        int x=0;
        rec(root,x);
        return ans;
        
    }
};