class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {


        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>> dp(m,vector<int>(n,1e9));

        dp[0][0]=grid[0][0];

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 and j==0)
                continue;

                int val1=1e9;
                int val2=1e9;

                if(j-1>=0)
                val1=dp[i][j-1];

                if(i-1>=0)
                val2=dp[i-1][j];

                dp[i][j]=grid[i][j]+min(val1,val2);
            }

        }
        return dp[m-1][n-1];
    }
};