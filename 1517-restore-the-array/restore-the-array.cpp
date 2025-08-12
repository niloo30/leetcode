class Solution {
public:
    #define ll long long
    int mod=1e9+7;
    int dp[100005];
    int f(int i,string& s,int k)
    {
        if(i>=s.size())
        return 1;

        if(s[i]=='0')
        return 0;

        if(dp[i]!=-1)
        return dp[i];
        int ans=0;
        ll num=0;
        for(int j=i;j<s.size();j++)
        {
            num=num*10+(s[j]-'0');

            if(num>k)
            break;

            ans=((ans) % mod+f(j+1,s,k) % mod) % mod;
        }
        return dp[i]= ans;
    }
    int numberOfArrays(string s, int k) {

        memset(dp,-1,sizeof(dp));
        return f(0,s,k);
        
    }
};