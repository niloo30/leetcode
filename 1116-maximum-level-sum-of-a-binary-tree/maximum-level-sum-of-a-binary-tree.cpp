
class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        int ans=0;
        int max_sum=INT_MIN;

        queue<TreeNode*> q;
        int level=1;
        q.push(root);

        while(!q.empty())
        {
            int n=q.size();

            int temp_sum=0;
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();

                temp_sum+=temp->val;
                if(temp->left)
                q.push(temp->left);

                if(temp->right)
                q.push(temp->right);
            }
            if(temp_sum>max_sum)
            {
                ans=level;
                max_sum=temp_sum;
            }
            level++;
        }

        return ans;
        
    }
};