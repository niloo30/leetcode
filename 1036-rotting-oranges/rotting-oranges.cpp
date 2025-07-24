class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

        int t=0;
        int vis[n][m];

        queue<pair<pair<int,int>,int>> q;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else
                vis[i][j]=0;
            }
        }

        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        int ans=0;
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;

            int t=q.front().second;
            q.pop();
            ans=max(ans,t);
            for(int i=0;i<4;i++)
            {
                int nr=r+dx[i];
                int nc=c+dy[i];

                if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]!=2 && grid[nr][nc]==1)
                {
                    q.push({{nr,nc},t+1});
                    vis[nr][nc]=2;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]!=2)
                return -1;
            }
        }

        return ans;
        
    }
};