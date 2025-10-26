
class Solution {
public:
    vector<vector<int>> ans;
    void f(TreeNode* root,int sum,vector<int>& arr)
    {
        if(!root)
        return ;
        if(root->left==NULL && root->right==NULL)
        {
            if(sum-root->val==0)
            {
                arr.push_back(root->val);
                ans.push_back(arr);
                arr.pop_back();
            }

            return ;
        }

        arr.push_back(root->val);
        f(root->right,sum-root->val,arr);
        f(root->left,sum-root->val,arr);
        arr.pop_back();
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<int> arr;


        f(root,targetSum,arr);
        return ans;
        
    }
};