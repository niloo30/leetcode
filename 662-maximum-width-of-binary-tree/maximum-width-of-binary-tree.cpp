 
class Solution {
public:
    #define ll unsigned long long 
    int widthOfBinaryTree(TreeNode* root) {

        ll ans=0;
        deque<pair<TreeNode*,ll>> q;

        if(root)
        q.push_back({root,0});

        while(!q.empty())
        {
            ll n=q.size();
            ll l=q.front().second;
            ll r=q.back().second;

            ans=max(ans,r-l+1);
            while(n--)
            {
                pair<TreeNode*,ll> temp=q.front();
                q.pop_front();

                TreeNode* node=temp.first;
                ll val=temp.second;

                if(node->left)
                {
                    q.push_back({node->left,2*val+1});
                }
                if(node->right)
                {
                    q.push_back({node->right,2*val+2});
                }
            }
            
        }

        return ans;
        
    }
};