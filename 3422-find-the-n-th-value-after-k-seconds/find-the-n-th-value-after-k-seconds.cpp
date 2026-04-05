class Solution {
public:
    int mod=1e9+7;
    int valueAfterKSeconds(int n, int k) {

        vector<vector<int>> dp(n,vector<int>(k+1,1));

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=k;j++)
            {
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            }
        }

        return dp[n-1][k];
        
    }
};