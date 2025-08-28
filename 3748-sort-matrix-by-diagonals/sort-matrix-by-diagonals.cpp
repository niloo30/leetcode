class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

        unordered_map<int,vector<int>> mp;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            mp[i-j].push_back(grid[i][j]);
        }
        for(auto &ele:mp)
        {
            if(ele.first>=0)
            sort(ele.second.begin(),ele.second.end());
            else
            sort(ele.second.rbegin(),ele.second.rend());
        }
        vector<vector<int>> ans(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int val=mp[i-j].back();
                ans[i][j]=val;
                mp[i-j].pop_back();
            }
        }
        return ans;
        
    }
};