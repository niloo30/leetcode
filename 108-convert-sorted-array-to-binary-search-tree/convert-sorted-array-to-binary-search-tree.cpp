
class Solution {
public:
    TreeNode* makeBST(vector<int>& nums,int start,int end)
    {
        if(start==end)
        return nullptr;
        int slow=start;
        int fast=start;

        while(fast!=end && fast!=end-1)
        {
            slow++;
            fast+=2;
        }

        TreeNode* head =new TreeNode(nums[slow]);
        head->left=makeBST(nums,start,slow);
        head->right=makeBST(nums,slow+1,end);

        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int n=nums.size();
        if(n==0)
        return nullptr;

        return makeBST(nums,0,n);
        
    }
};