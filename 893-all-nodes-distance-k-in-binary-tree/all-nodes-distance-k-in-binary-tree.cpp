
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*> mp;

    // mp child->parent

    void inorder(TreeNode* root)
    {
        if(!root)
        return ;

        if(root->left)
        mp[root->left]=root;

        inorder(root->left);

        if(root->right)
        mp[root->right]=root;

        inorder(root->right);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        inorder(root);
        //now do bfs from target

        vector<int> ans;
        queue<TreeNode*> q;
        unordered_set<TreeNode*> st;

        q.push(target);
        st.insert(target);
        int curr=0;

        while(!q.empty())
        {

            int n=q.size();
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();

                if(curr==k)
                ans.push_back(temp->val);

                if(temp->left and !st.count(temp->left))
                {
                    q.push(temp->left);
                    st.insert(temp->left);
                }
                

                if(temp->right and !st.count(temp->right))
                {
                    q.push(temp->right);
                    st.insert(temp->right);
                }
                

                if(mp[temp] and !st.count(mp[temp])){
                q.push(mp[temp]);
                st.insert(mp[temp]);
                }
            }
            curr++;
        }



        return ans;
    }
};