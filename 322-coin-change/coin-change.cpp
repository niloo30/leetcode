class Solution {
public:
    int dp[13][10005];
    int rec(int i,vector<int>& coins,int x)
    {
        if(i==coins.size())
        {
            if(x==0)
            return 0;

            return 1e9;
        }
        if(x==0)
        {
            return 0;
        }
        if(x<0)
        return 1e9;

        if(dp[i][x]!=-1)
        return dp[i][x];
        int ans=INT_MAX;
        ans=1+ min({rec(i+1,coins,x-coins[i]),rec(i,coins,x-coins[i])});
        ans=min(ans,rec(i+1,coins,x));

        return dp[i][x]= ans;
        
    }
    int coinChange(vector<int>& coins, int amount) {



        memset(dp,-1,sizeof(dp));

        int ans= rec(0,coins,amount);
        if(ans>=1e9)
        return -1;

        return ans;
        
    }
};