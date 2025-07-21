class Solution {
public:
    string makeFancyString(string s) {

        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(i<2)
            ans+=s[i];
            else
            {
                ans.push_back(s[i]);
                int x=ans.size();

                if(ans.back()==ans[x-2]&& ans.back()==ans[x-3])
                ans.pop_back();

                
            }
           
        }
        return ans;
        
    }
};