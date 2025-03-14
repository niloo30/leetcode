class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n=strs.size();

        unordered_map<string,vector<string>> mp;

        for(int i=0;i<n;i++)
        {
            string s=strs[i];
            string temp=s;

            sort(begin(s),end(s));
            mp[s].push_back(temp);
        }

        vector<vector<string>> ans;

        for(auto ele:mp)
        ans.push_back(ele.second);


        return ans;




        
    }
};