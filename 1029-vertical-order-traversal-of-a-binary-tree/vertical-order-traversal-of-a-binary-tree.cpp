class Solution {
public:

    map<int, vector<pair<int,int>>> mp;
    void rec(TreeNode* root,int row,int col)
    {
        if(!root) return;

        mp[col].push_back({row,root->val});

        rec(root->left,row+1,col-1);
        rec(root->right,row+1,col+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        rec(root,0,0);
        vector<vector<int>> ans;
        for(auto& ele:mp)
        {
            auto v=ele.second;
            sort(v.begin(),v.end());
            vector<int> col;

            for(auto &p : v)
                col.push_back(p.second); 

            ans.push_back(col);
        }
        
        return ans;
    }
};