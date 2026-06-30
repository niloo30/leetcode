class Solution {
public:
    int numberOfSubstrings(string s) {

        int n=s.size();

        map<char,int > mp;

        int ans=0;

        int i=0,j=0;

        while(j<n){
            mp[s[j]]++;

            while(mp.size()>=3){
                
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