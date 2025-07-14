class Solution {
public:
    const int mod=1e9+7;
    int dp[1005][55];
    int f(int val,vector<vector<int>>& arr,int i)
    {
        if(val<0)
        return 0;
        if(i>=arr.size())
        {
            return val==0;
        }

        if(dp[val][i]!=-1)
        return dp[val][i];
        int take=0;
        int skip=0;

        int noofque=arr[i][0];
        for(int j=1;j<=noofque;j++)
        {
            if(j*arr[i][1]>val)
            break;
            take=(take+f(val-j*arr[i][1],arr,i+1))%mod;
        }
        skip=f(val,arr,i+1);
        return dp[val][i]=(take+skip)%mod;
    }
    int waysToReachTarget(int target, vector<vector<int>>& arr) {

        memset(dp,-1,sizeof(dp));
        return f(target,arr,0);
        
    }
};