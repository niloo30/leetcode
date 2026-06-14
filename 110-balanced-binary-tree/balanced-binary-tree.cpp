
class Solution {
public:
    
    int rec(TreeNode* root){
        if(!root) return 0;
        
        int lh=rec(root->left);
        if(lh==-1)
        return -1;


        int rh=rec(root->right);
        if(rh==-1)
        return -1;

        if(abs(lh-rh)>1) return -1;
        else return 1+max(lh,rh);

    }


    bool isBalanced(TreeNode* root) {
        
        return rec(root)==-1 ? false:true ;
    }
};