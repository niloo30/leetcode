
class Solution {
public:
    vector<vector<int>> ans;
    void rec(TreeNode* root,vector<int>& v,int x){
        if(!root)
        return ;

        if(root->left==nullptr and root->right==nullptr)
        {
            if(x==root->val)
            {
                v.push_back(x);
                ans.push_back(v);
                v.pop_back();
                return ;
            }
        }
        v.push_back(root->val);
        rec(root->left,v,x-root->val);
        rec(root->right,v,x-root->val);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<int> v;
        rec(root,v,targetSum);
        return ans;
        
    }
};