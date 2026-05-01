class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        //dp[i]==max subarray sum ending at i means nums[i] included

        int n=nums.size();
        vector<int> dp(n);
        dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=nums[i]+max(0,dp[i-1]);
        }
        int ans=-1e9;
        for(int i=0;i<n;i++)
        ans=max(ans,dp[i]);


        return ans;

        
    }
};