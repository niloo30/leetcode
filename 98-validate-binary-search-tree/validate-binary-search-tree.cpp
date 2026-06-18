class Solution {
public:
    long long  maxi(TreeNode* node)
    {
        if(!node)
        return LLONG_MIN;

        return max((long long)node->val,max(maxi(node->left),maxi(node->right)));
    }
    long long  mini(TreeNode* node)
    {
        if(!node)
        return LLONG_MAX;

        return min((long long)node->val,min(mini(node->left),mini(node->right)));
    }
    bool rec(TreeNode* root)
    {
        if(!root)
        return true;

        if(root->left==nullptr and root->right==nullptr)
        return true;

        //left side se maximum 
        long long leftval=maxi(root->left);
        if(leftval>=root->val)
        return false;

        //right side se minimum 
        long long rightval=mini(root->right);
        if(rightval<=root->val)
        return false;

        return rec(root->left) && rec(root->right);

    }
    bool isValidBST(TreeNode* root) {


        return rec(root);
        
    }
};