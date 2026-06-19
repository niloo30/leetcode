
class Solution {
public:
    TreeNode* insert(TreeNode* root,int x)
    {
        if(!root)
        {
            return new TreeNode(x);
        }

        if(root->val>x)
        root->left=insert(root->left,x);
        else
        root->right=insert(root->right,x);


        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {

        TreeNode* root=new TreeNode(preorder[0]);

        for(int i=1;i<preorder.size();i++)
        {
            root=insert(root,preorder[i]);
        }
        return root;
        
    }
};