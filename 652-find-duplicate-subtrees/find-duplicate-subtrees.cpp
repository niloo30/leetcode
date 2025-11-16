
class Solution {
public:
    vector<TreeNode*> ans;
    unordered_map<string,int> mp;
    string f(TreeNode* root)
    {
        if(!root)
        return "N";

        string t=to_string(root->val)+"."+f(root->left)+"."+f(root->right);

        if(mp[t]==1)
        ans.push_back(root);
        
        mp[t]++;

        return t;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {

        f(root);

        return ans;
        
    }
};