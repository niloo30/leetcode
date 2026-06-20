
class Solution {
public:
    int ans;
    int count=0;
    void rec(TreeNode* root,int k)
    {
        if(!root)
        return ;

        rec(root->left,k);
        count++;
        if(count==k)
        {
            ans=root->val;
            return ;
        }
        rec(root->right,k);

    }
    int kthSmallest(TreeNode* root, int k) {
        rec(root,k);
        return ans;
    }
};