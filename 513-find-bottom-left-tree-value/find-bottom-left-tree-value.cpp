
class Solution {
public:
    int ans;
    int maxi=-1;
    void f(TreeNode* root,int d)
    {
        if(!root)
        return ;

        if(d>maxi){
            maxi=d;
            ans=root->val;
        }

        f(root->left,d+1);
        f(root->right,d+1);
    }
    int findBottomLeftValue(TreeNode* root) {
            
            f(root,0);
            return ans;
    }
};