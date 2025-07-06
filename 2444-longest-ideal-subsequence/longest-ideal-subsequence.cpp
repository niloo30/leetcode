class Solution {
public:
    int dp[100002][129];
    int f(string& s,int i,int prev,int k)
    {
        if(i==s.length())
        return 0;
        if(dp[i][prev+1]!=-1)
        return dp[i][prev+1];
        int take=0,skip=0;

        if(prev==-1 || abs(s[i]-prev)<=k)
        take=1+f(s,i+1,s[i],k);
        skip = f(s, i+1,prev,k);

        return dp[i][prev+1]= max(take,skip);
    }

    
    int longestIdealString(string s, int k) {
        memset(dp,-1,sizeof(dp));
        return f(s,0,-1,k);
        
    }
};