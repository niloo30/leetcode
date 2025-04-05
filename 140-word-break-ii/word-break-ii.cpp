class Solution {
public:
    vector<string> ans;
    set<string> st;
    void f(int i,string &s,int n,string temp)
    {
        if(i>=n)
        {
            temp.pop_back();  //removing one extra space 
            ans.push_back(temp);
        }

        for(int j=i;j<n;j++)
        {
            string t=s.substr(i,j-i+1);

            if(st.contains(t))
            {
                temp+=t;
                temp+=" ";
                f(j+1,s,n,temp);
                // temp.pop_back();  // below is backtrack step
                for(int k=0;k<=t.size();k++)
                temp.pop_back();
            }
        }

    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {

        for(auto ele:wordDict)
        st.insert(ele);
        int n=s.size();
        f(0,s,n,"");

        return ans;
        
    }
};