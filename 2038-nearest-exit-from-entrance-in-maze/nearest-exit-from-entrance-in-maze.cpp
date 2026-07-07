class Solution {
public:
    int dx[4]={-1,0,+1,0};
    int dy[4]={0,+1,0,-1};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {

        int n=maze.size();
        int m=maze[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

       
        int r=entrance[0];
        int c=entrance[1];

        queue<pair<pair<int,int>,int>> q;

        q.push({{r,c},0});
        vis[r][c]=1;

        while(!q.empty()) {
            int r=q.front().first.first;
            int c=q.front().first.second;


            int dist=q.front().second;

            q.pop();

            if(!(r==entrance[0] && c==entrance[1])  &&(r==0 || r==n-1 || c==0 || c==m-1))
            return dist;

            for(int i=0;i<4;i++){
                int nr=r+dx[i];
                int nc=c+dy[i];

                if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc] && maze[nr][nc]=='.') {
                    vis[nr][nc]=1;
                    q.push({{nr,nc},dist+1});
                }
            }
        }


        return -1;
        
    }
};