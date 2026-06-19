
class Solution {
public:
    TreeNode* maketree(int l,int h,vector<int>& nums)
    {
        if(l>h)
        return nullptr;

        if(l==h)
        return new TreeNode(nums[l]);

        int mid=(l+h)/2;

        TreeNode* root=new TreeNode(nums[mid]);
        root->left=maketree(l,mid-1,nums);
        root->right=maketree(mid+1,h,nums);


        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int l=0;
        int h=nums.size()-1;


        TreeNode* root=maketree(l,h,nums);
        return root;
        
    }
};