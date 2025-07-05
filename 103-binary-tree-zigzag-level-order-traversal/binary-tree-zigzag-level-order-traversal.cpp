
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        queue<TreeNode*> q;
        int count=0;
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
            
            if(count%2)
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);

            count++;
            if(count==2)
            count=0;
        }

        return ans;
        
    }
};