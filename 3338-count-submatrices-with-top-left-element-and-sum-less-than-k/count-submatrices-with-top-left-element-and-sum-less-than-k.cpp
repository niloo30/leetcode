class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {

        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> arr=grid;

        for(int i=1;i<m;i++)
        arr[0][i]+=arr[0][i-1];

        for(int i=1;i<n;i++)
        arr[i][0]+=arr[i-1][0];

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                arr[i][j]+=arr[i-1][j];
                arr[i][j]+=arr[i][j-1];

                arr[i][j]-=arr[i-1][j-1];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            if(arr[i][j]<=k)
            ans++;
        }

        return ans;
        
    }
};