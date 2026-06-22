class Solution {
public:
    int ans=0;
    int dx[4]={0,-1,0,+1};
    int dy[4]={-1,0,+1,0};
    void bfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid){
        
        int m=vis.size();
        int n=vis[0].size();
        int fishes=0;

        queue<pair<int,int>> q;

        vis[i][j]=1;
        q.push({i,j});

        while(!q.empty()){
            
           
            int r=q.front().first;
            int c=q.front().second;

            q.pop();
            fishes+=grid[r][c];
            ans=max(ans,fishes);

            for(int i=0;i<4;i++)
            {
                int nr=r+dx[i];
                int nc=c+dy[i];

                if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && grid[nr][nc]>0)
                {
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                }
            }
        }
    }
    int findMaxFish(vector<vector<int>>& grid) {

         int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>> vis(m,vector<int>(n,0));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]>0)
                {
                    bfs(i,j,vis,grid);
                }
            }
        }
        
        return ans;
        
    }
};