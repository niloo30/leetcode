class Solution {
public:
    bool solve(vector<int>& nums,int i,int x,vector<vector<int>>& dp)
    {
        if(x<0)return false;
        if(x==0)return true;

        if(i==0) return (nums[i]==x);

        if(dp[i][x]!=-1)return dp[i][x];

        return dp[i][x]= (solve(nums,i-1,x,dp) || solve(nums,i-1,x-nums[i],dp));

    }
    bool canPartition(vector<int>& nums) {

        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=nums[i];
        if(sum%2!=0)return false;
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return solve(nums,n-1,sum/2,dp);
        
    }
};