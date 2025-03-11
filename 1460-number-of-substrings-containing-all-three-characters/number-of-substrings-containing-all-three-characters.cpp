class Solution {
public:
    int numberOfSubstrings(string s) {

        int n=s.size();

        unordered_map<char,int> mp;

        int ans=0;
        int i=0;int j=0;

        while(j<n)
        {
            char ch=s[j];
            mp[s[j]]++;

            while(mp.size()>=3)
            {
                ans+=(n-j);
                mp[s[i]]--;
                if(mp[s[i]]==0)
                mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
        
    }
};