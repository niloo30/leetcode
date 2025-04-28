/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<TreeNode*,int> mp;
    int f(TreeNode *root)
    {
        if(!root)
        return 0;
        
        if(mp.find(root)!=mp.end())
        return mp[root];
        int ll=(root->left) ? f(root->left->left):0;
        int lr=(root->left) ? f(root->left->right):0;
        int rr=(root->right) ? f(root->right->right):0;
        int rl=(root->right) ? f(root->right->left):0;
        
        int take=root->val+ll+lr+rr+rl;
        int skip=f(root->left)+f(root->right);
        
        
        return mp[root]=max(take,skip);
    }
    int rob(TreeNode* root) {

        return f(root);
        
    }
};