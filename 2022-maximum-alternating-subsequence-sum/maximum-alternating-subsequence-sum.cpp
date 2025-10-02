class Solution {
public:
    #define ll long long 
    // unordered_map<string,ll> mp;
    ll dp[100003][2];
    ll f(int i,vector<int>& nums,int nth)
    {
        if(i==nums.size())
        return 0;
        
        ll ans=INT_MIN;

        
        if(dp[i][nth%2]!=-1)
        return dp[i][nth%2];

        ans=max(ans,0+f(i+1,nums,nth));
        if(nth%2==0)
        {
            ans=max(ans,nums[i]+f(i+1,nums,nth+1));
        }
        else
            ans=max(ans,-nums[i]+f(i+1,nums,nth+1));
        
        return dp[i][nth%2]=ans;
    }
    long long maxAlternatingSum(vector<int>& nums) {

        memset(dp,-1,sizeof(dp));
        return f(0,nums,0);
        
    }
};