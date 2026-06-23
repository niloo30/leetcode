class Solution {
public:
    int ans=0;
    int dx[4]={0,-1,0,+1};
    int dy[4]={-1,0,+1,0};
    void bfs(int i,int j,vector<vector<int>>& board,vector<vector<int>>& vis)
    {
        vis[i][j]=1;

        queue<pair<int,int>> q;
        q.push({i,j});

        int m=vis.size();
        int n=vis[0].size();

        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;

            q.pop();

            for(int i=0;i<4;i++){
                int nr=r+dx[i];
                int nc=c+dy[i];

                if(nc>=0 && nr>=0 && nr<m && nc<n && board[nr][nc]==0 && !vis[nr][nc])
                {
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }


    }
    int closedIsland(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        
        vector<vector<int>> vis(m,vector<int>(n,0));

        queue<pair<int,int>> q;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==0)
                {
                    if(i==0 || i==m-1 || j==0 || j==n-1)
                    {
                        vis[i][j]=1;
                        q.push({i,j});
                    }
                }
            }
        }

        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};

        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;

            q.pop();
            for(int i=0;i<4;i++)
            {
                int new_r=r+dx[i];
                int new_c=c+dy[i];

                if(new_r>=0 && new_r<m && new_c>=0 && new_c<n && board[new_r][new_c]==0)
                {
                    if(!vis[new_r][new_c])
                    {
                        vis[new_r][new_c]=1;
                        q.push({new_r,new_c});
                    }
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==0 && vis[i][j])
                {
                    board[i][j]=1;
                }
            }
        }

        vector<vector<int>> vis2(m,vector<int>(n,0));
        for(int i=1;i<m-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(board[i][j]==0 && !vis2[i][j])
                {
                    ans++;
                    bfs(i,j,board,vis2);
                }
            }
        }
        return ans;
    }
};