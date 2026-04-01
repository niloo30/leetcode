class Solution {
public:
    int dp[101][101];
    bool rec(string& s,int i,int open)
    {
        if(open<0)
        return false;

        if(i==s.size())
        {
            return open==0;
        }
        if(dp[i][open]!=-1)
        return dp[i][open];
        bool ans=false;

        if(s[i]=='*')
        {
            ans=(ans | rec(s,i+1,open));

            ans=(ans | rec(s,i+1,open+1));

            if(open>0)
            ans=(ans | rec(s,i+1,open-1));

        }
        else if(s[i]=='(')
        {
            ans=(ans| rec(s,i+1,open+1));
        }
        else
        {
            ans=(ans| rec(s,i+1,open-1));

        }




        return dp[i][open]= ans;
    }
    bool checkValidString(string s) {

        stack<int> open,stars;

        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            open.push(i);
            else if(s[i]=='*')
            stars.push(i);

            else //s[i]==')'
            {
                if(open.empty() and stars.empty())
                return false;
                else
                if(open.empty())
                stars.pop();
                else
                open.pop();
            }
        }


        while(!open.empty() && !stars.empty())
        {
            if(stars.top()<open.top())
            return false;

            open.pop();
            stars.pop();        }

        return open.empty();
    }
};