class Solution {
public:
    vector<vector<string>> ans;
    bool ispal(string s)
    {
        string t=s;
        reverse(s.begin(),s.end());
        return s==t;
    }
    void fun(string s,int i,vector<string>& arr)
    {
        if(i>=s.size())
        {
            ans.push_back(arr);
            return ;
        }

        for(int j=i;j<s.size();j++)
        {
            string t=s.substr(i,j-i+1);
            if(ispal(t))
            {
                arr.push_back(t);
                fun(s,j+1,arr);
                arr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {

        vector<string> arr;
        fun(s,0,arr);

        return ans;
        
    }
};