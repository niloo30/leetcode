class Solution {
public:
    // think procedure 
    // level ->choice ->ch3eck->move
    int dp[10001];
    int rec(int n)
    {
        //pruning ->already applied the check inside for loop so no need 

        // base case
        if(n==0)
        return 0;
        // cache check
        if(dp[n]!=-1)
        return dp[n];

        //work 
        int ans=1e9;

        for(int i=1;i*i<=n;i++)
        {
            if(i*i<=n)
            {
                ans=min(ans,1+rec(n-i*i));
            }
        }

        //save and return 
        return dp[n]=ans;

    }

    int numSquares(int n) {
        
        memset(dp,-1,sizeof(dp));
        return rec(n);
    }
};