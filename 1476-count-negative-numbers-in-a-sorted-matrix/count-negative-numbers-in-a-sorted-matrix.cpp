class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();

        int ans=0;
        for(int i=0;i<m;i++)
        {
            vector<int> arr=grid[i];

            int idx=upper_bound(arr.begin(),arr.end(),0,greater<int>())-arr.begin();
            ans+=(n-idx);
        }

        return ans;
        
    }
};