
class Solution {
public:
    TreeNode* insert(TreeNode* root,int val){
        if(root==nullptr)
        {
            return new TreeNode(val);
        }

        if(val>root->val)
        root->right=insert(root->right,val);
        else
        root->left=insert(root->left,val);

        return root;


    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        return insert(root,val);
        
    }
};