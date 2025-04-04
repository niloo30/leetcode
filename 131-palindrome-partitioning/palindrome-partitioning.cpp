class Solution {
public:
    bool ispal(string s)
    {
        int i=0;
        int j=s.size()-1;

        while(i<j)
        {
            if(s[i]!=s[j])
            return false;

            i++;
            j--;
        }
        return true;
    }
    vector<vector<string>> ans;
    void f(string& s,string temp,int i,int n,vector<string>& v)
    {
        if(i>=n)
        {
            ans.push_back(v);
            return ;
        }

        for(int j=i;j<n;j++)
        {
            string t=s.substr(i,j-i+1);
            if(ispal(t))
            {
                v.push_back(t);
                f(s,temp,j+1,n,v);
                v.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {

        int n=s.size();
        vector<string> v;
        f(s,"",0,n,v);

        return ans;
        
    }
};