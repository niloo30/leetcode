class Solution {
public:
    bool notdigit(char ch)
    {
        if(ch>='a' && ch<='z')
        return true;

        return false;
    }
    string clearDigits(string s) {

        int n=s.size();
        stack<char> st;

        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(notdigit(ch))
            st.push(ch);
            else
            if(st.size())
            st.pop();
        }
        string ans="";
        while(st.size())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};