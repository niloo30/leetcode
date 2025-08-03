class Solution {
public:
    map<int,vector<int>> mp;
    int mod=1e9+7;
    int dp[5005][10];
    int f(int i,int n)
    {
        if(n==0)
        return 1;
        if(dp[n][i]!=-1)
        return dp[n][i];
        int ans=0;
        int pos=i;

        for(auto ele:mp[pos])
        {
          ans=(ans+f(ele,n-1))%mod;
        }
        return dp[n][i]=ans;
    }
    int knightDialer(int n) {

        mp[0]={4,6};
        mp[1]={6,8};
        mp[2]={7,9};
        mp[3]={4,8};
        mp[4]={0,3,9};
        mp[5]={};
        mp[6]={0,1,7};
        mp[7]={2,6};
        mp[8]={1,3};
        mp[9]={2,4};

        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<=9;i++)
        {
            ans=(ans+f(i,n-1))%mod;
        }
        return ans;
        
    }
};