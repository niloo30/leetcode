class Solution {
public:
    int dp[100001][2];
    int f(int i,int prev,string& s)
    {
        if(i>=s.size())
        return 0;

        if(dp[i][prev]!=-1)
        return dp[i][prev];

        int flip=1e9,notflip=1e9;

        if(s[i]=='0')
        {
            if(prev==0)
            {
                flip=1+f(i+1,1,s);
                notflip=f(i+1,0,s);
            }
            else
            {
                flip=1+f(i+1,1,s);
            }
        }
        else //s[i]=='1'
        {
            if(prev==1)
            {
                notflip=f(i+1,1,s);
            }
            else
            {
                flip=1+f(i+1,0,s);
                notflip=f(i+1,1,s);
                
            }

        }

        return dp[i][prev]=min(flip,notflip);
    }
    int minFlipsMonoIncr(string s) {

        memset(dp,-1,sizeof(dp));
        return f(0,0,s);
        
    }
};