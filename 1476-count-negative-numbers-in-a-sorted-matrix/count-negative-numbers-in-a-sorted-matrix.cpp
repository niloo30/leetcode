class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();

        int ans=0;
        int r=m-1;
        int c=0;

        while(c<n and r>=0)
        {
            if(grid[r][c]>=0)
            c++;
            else
            {
                ans+=(n-c);
                r--;
            }
        }

        return ans;
        
    }
};