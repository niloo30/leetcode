class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n=s.size();

        unordered_map<char,int> mp;
        int ans=0;
        int i=0,j=0;

        while(j<n)
        {
            mp[s[j]]++;

            while(j-i+1>mp.size())
            {
                mp[s[i]]--;
                if(mp[s[i]]<=0)
                mp.erase(s[i]);
                i++;
            }

            ans=max(ans,j-i+1);
            j++;
        }

        return ans;
        
    }
};