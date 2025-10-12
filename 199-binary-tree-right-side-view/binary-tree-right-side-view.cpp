
class Solution {
public:
    // at level we need last node 
    // so just try level order trav bfs
    vector<int> rightSideView(TreeNode* root) {

        queue<TreeNode*> q;
        if(root)
        q.push(root);

        vector<int> ans;

        while(!q.empty())
        {
            int n=q.size();
            TreeNode* temp;

            while(n--)
            {
                temp=q.front();
                q.pop();

                if(temp->left)
                q.push(temp->left);

                if(temp->right)
                q.push(temp->right);


            }
            ans.push_back(temp->val);
        }

        return ans;
        
    }
};