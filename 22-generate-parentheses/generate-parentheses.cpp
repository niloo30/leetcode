class Solution {
public:
    vector<string> ans;
    void f(int open,int close,string s)
    {
        if(!open and !close)
        {
            ans.push_back(s);
            return ;
        }
        if(open==close)
        f(open-1,close,s+'(');
        else
        {
            if(open)
            f(open-1,close,s+'(');
            f(open,close-1,s+')');

        }
    }
    vector<string> generateParenthesis(int n) {

        f(n,n,"");

        return ans;
        
    }
};