class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n=nums.size();
        int i=0,j=n-1;
        int k=n-1;
        vector<int> ans(n,0);
        while(i<=j)
        {
            if(nums[i]*nums[i]>=nums[j]*nums[j])
            {
                ans[k--]=nums[i]*nums[i];
                i++;
            }
            else
            {
                ans[k--]=nums[j]*nums[j];
                j--;
            }
        }
        
        return ans;
    }
};