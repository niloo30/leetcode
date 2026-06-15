
class Solution {
public:
    int ans=0;
    void rec(TreeNode* root,int x){
        
        if(!root)
        {
            return  ;
        }
        x=10*x+root->val;
        if(!root->left and !root->right)
        {
            ans+=x;
            return ;
        }
        
        rec(root->left,x);
        rec(root->right,x);

    }
    int sumNumbers(TreeNode* root) {

        rec(root,0);
        return ans;
        
    }
};