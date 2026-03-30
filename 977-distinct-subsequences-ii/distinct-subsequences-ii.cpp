class Solution {
public:
    int mod=1e9+7;
    int distinctSubseqII(string s) {

        int n=s.size();

        vector<long long > dp(n+1,0);
        vector<int> lastseen(26,0);

        dp[0]=1;

        for(int i=1;i<=n;i++)
        {
            dp[i]=(2LL*dp[i-1])%mod;

            char c=s[i-1];
            if(lastseen[c-'a']>0){
               // dp[i]-=(dp[lastseen[c-'a']-1]+mod)%mod;
                dp[i] = (dp[i] - dp[lastseen[c-'a']-1] + mod) % mod;
            }

            lastseen[c-'a']=i;
        }

        return (dp[n]-1+mod)%mod;

        
    }
};