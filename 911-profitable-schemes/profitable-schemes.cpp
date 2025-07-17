class Solution {
public:
    const int mod=1e9+7;
    int dp[105][105][105];
    int f(int i,int n,int minProfit,vector<int>& group,vector<int>& profit)
    {
        if(n<0)
        return 0;

        if(i==group.size())
        {
            return (minProfit ==0);
        }

        if(dp[i][n][minProfit]!=-1)
        return dp[i][n][minProfit];
        int take=0,skip=0;

        take=f(i+1,n-group[i],max(0,minProfit-profit[i]),group,profit);
        skip=f(i+1,n,minProfit,group,profit);

        return dp[i][n][minProfit]=(take+skip)%mod;

    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        return f(0,n,minProfit,group,profit);
        
    }
};