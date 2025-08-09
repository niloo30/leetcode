
class Solution {
public:
    void rec(int level,int depth,int val,TreeNode* root){

        if(root==NULL)
        return ;

        if(level==depth-1)
        {
            TreeNode* l=NULL;
            TreeNode* r=NULL;
            if(root->left)
            l=root->left;
            if(root->right)
            r=root->right;

            root->left=new TreeNode(val);
            root->right=new TreeNode(val);

            if(root->left)
            root->left->left=l;
            if(root->right)
            root->right->right=r;

        }
        rec(level+1,depth,val,root->left);
        rec(level+1,depth,val,root->right);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {


        if(depth==1)
        {
            TreeNode* newroot=new TreeNode(val);
            newroot->left=root;

            return newroot;
        }

        rec(1,depth,val,root);

        return root;
        
    }
};