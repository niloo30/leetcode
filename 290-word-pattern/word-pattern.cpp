class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> arr;
        string token;
        stringstream ss(s);

        while(getline(ss,token,' '))
        {
            arr.push_back(token);
        }

        if(pattern.size()!=arr.size())
        return false;

        map<char,string> mp;
        set<string> st;
        int n=arr.size();

        for(int i=0;i<n;i++)
        {
            char ch=pattern[i];
            string t=arr[i];

            if(mp.find(ch)!=mp.end())
            {
                if(mp[ch]!=t)
                return false;


            }
            else
            {
                if(st.find(t)==st.end())
                {
                    mp[ch]=t;
                    st.insert(t);
                }
                
                else
                return false;
            }
        }

        return true;
        
    }
};