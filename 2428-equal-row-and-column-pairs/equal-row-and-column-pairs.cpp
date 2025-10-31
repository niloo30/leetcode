class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        int n=grid.size();

        unordered_map<string,int> mp1,mp2;
        for(int i=0;i<n;i++)
        {
            //traversing ith row

            string t="";
            for(int j=0;j<n;j++)
            {
                t=t+to_string(grid[i][j])+"#";
            }
            mp1[t]++;
        }

        for(int i=0;i<n;i++)
        {
            string t="";
            for(int j=0;j<n;j++)
            {
                t=t+to_string(grid[j][i])+"#";
            }
            mp2[t]++;
        }
        
        int ans=0;
        for(auto ele:mp1)
        {
            string s=ele.first;
            if(mp2.find(s)!=mp2.end())
            {
                ans+=(ele.second*mp2[s]);
            }
        }
        return ans;
    }
};