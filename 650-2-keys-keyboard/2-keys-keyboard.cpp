class Solution {
public:
    int dp[1005][2005];
    int f(int level,int n,int copy)
    {
        if(level>n)
        return 1e9;

        if(level==n)
        return 0;

        if(dp[level][copy]!=-1)
        return dp[level][copy];
        int ans=1e9;
        if(level!=copy)
        ans=min(ans,1+f(level,n,level));
        if(copy>0)
        ans=min(ans,1+f(level+copy,n,copy));



        return dp[level][copy]= ans;
    }
    int minSteps(int n) {

        if(n==1)
        return 0;

        memset(dp,-1,sizeof(dp));
        return f(1,n,0);
        
    }
};