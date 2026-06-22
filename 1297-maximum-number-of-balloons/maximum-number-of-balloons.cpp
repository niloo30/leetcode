class Solution {
public:
    int maxNumberOfBalloons(string text) {

        map<char,int> mp;

        for(auto& ch:text)
        mp[ch]++;


        string s="balloon";

        int ans=1e9;

        ans=min(ans,mp['a']);
        ans=min(ans,mp['b']);
        ans=min(ans,mp['n']);
        ans=min(ans,mp['l']/2);
        ans=min(ans,mp['o']/2);


        

        return ans;
        
    }
};