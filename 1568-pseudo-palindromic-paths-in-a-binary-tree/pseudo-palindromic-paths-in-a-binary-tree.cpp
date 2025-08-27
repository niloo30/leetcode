
class Solution {
public:
    
    int rec (TreeNode* root,vector<int>& arr)
    {
        if(root==nullptr)
        return 0;
        arr[root->val]++;

        if(root->left==nullptr && root->right==nullptr)
        {
            int oddfreq=0;
            for(int i=0;i<10;i++)
            {
                if(arr[i]&1)
                oddfreq++;
                
            }
            arr[root->val]--;
            return oddfreq<=1;
        }
        int ans= rec(root->left,arr)+rec(root->right,arr);
        arr[root->val]--;

        return ans;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        
        // palindrome just remember at most one elemnts can have odd frequency

        vector<int> arr(10,0);
        int ans= rec(root,arr);
        return ans;
    }
};