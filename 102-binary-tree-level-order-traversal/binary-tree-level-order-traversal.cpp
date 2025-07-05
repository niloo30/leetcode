
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root)
        q.push(root);

        while(!q.empty())
        {
            vector<int> temp;
            int n=q.size();

            while(n--)
            {
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left)
                q.push(t->left);
                if(t->right)
                q.push(t->right);
            }
            ans.push_back(temp);
        }

        return ans;
        
    }
};