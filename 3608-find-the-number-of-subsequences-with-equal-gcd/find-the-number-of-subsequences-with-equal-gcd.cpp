class Solution {
public:
    int mod=1e9+7;
    int dp[201][201][201];
    int rec(int i,vector<int>& nums,int first,int sec) {

        if(i==nums.size()) {
            if(first!=0 && sec!=0)
            return first==sec;

            return 0;
        }
        if(dp[i][first][sec]!=-1)
        return dp[i][first][sec];

        int skip=rec(i+1,nums,first,sec);
        int take1=rec(i+1,nums,__gcd(first,nums[i]),sec);
        int take2=rec(i+1,nums,first,__gcd(sec,nums[i]));


        return dp[i][first][sec]=((skip+take1)%mod+take2)%mod;
    }
    int subsequencePairCount(vector<int>& nums) {

        memset(dp,-1,sizeof(dp));
        return rec(0,nums,0,0);
        
    }
};