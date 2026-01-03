class Solution {
public:
    int dp[15][5001];
    string states[12] = {"RYG", "RGY", "RYR", "RGR", "YRG", "YGR", "YGY", "YRY", "GRY", "GYR", "GRG", "GYG"};

    int mod=1e9+7;

    int f(int prev,int n)
    {
        if(n==0)
        return 1;

        if(dp[prev][n]!=-1)
        return dp[prev][n];

        int ans=0;
        string prevstring=states[prev];

        for(int curr=0;curr<12;curr++)
        {
            if(prev==curr)
            continue;

            string currstring=states[curr];

            bool flag=true;

            for(int i=0;i<3;i++)
            {
                if(currstring[i]==prevstring[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            ans=(ans+f(curr,n-1))%mod;
        }
        return dp[prev][n]=ans;
    }
    int numOfWays(int n) {

        memset(dp,-1,sizeof(dp));
        int ans=0;

        for(int i=0;i<12;i++)
        {
            ans=(ans+f(i,n-1))%mod;
        }

        return ans;
        
    }
};