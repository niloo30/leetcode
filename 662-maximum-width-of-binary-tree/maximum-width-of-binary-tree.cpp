
class Solution {
public:
    #define ll unsigned long long 
    int widthOfBinaryTree(TreeNode* root) {

        deque<pair<TreeNode*,ll>> q;

        if(root)
        q.push_back({root,0});

        ll ans=0;
        while(!q.empty()){

            int n=q.size();
            auto first=q.front();
            auto last=q.back();

            ans=max(ans,last.second-first.second+1);

            while(n--){
                TreeNode* temp=q.front().first;
                ll val=q.front().second;
                
                q.pop_front();
                if(temp->left)
                q.push_back({temp->left,2*val+1});

                if(temp->right)
                q.push_back({temp->right,2*val+2});

            }

        }


        return ans;
        
    }
};