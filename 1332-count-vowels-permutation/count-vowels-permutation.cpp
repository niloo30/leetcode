class Solution {
public:
    map<char,vector<char>> mp;
    int mod=1e9+7;

    int dp[20001][26];
    int f(char ch,int n)
    {
        if(n==0)
        return 1;

        if(dp[n][ch-'a']!=-1)
        return dp[n][ch-'a'];
        int ans=0;

        for(auto ele:mp[ch])
        {
            ans=(ans+f(ele,n-1))%mod;
        }

        return dp[n][ch-'a']=ans;
    }
    int countVowelPermutation(int n) {
        
        mp['a']={'e'};
        mp['e']={'a','i'};
        mp['i']={'a','e','o','u'};
        mp['o']={'i','u'};
        mp['u']={'a'};

        int ans=0;
        memset(dp,-1,sizeof(dp));
        for(auto ele:mp)
        {
            char ch=ele.first;
            ans=(ans+f(ch,n-1))%mod;
        }
        return ans;
    }
};