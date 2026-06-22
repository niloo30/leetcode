class Solution {
public:
    int dx[4]={0,-1,0,+1};
    int dy[4]={-1,0,+1,0};
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {

        int n=isWater.size();
        int m=isWater[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        vector<vector<int>> ans(n,vector<int>(m,0));
        //{{row,col},dist}
        queue<pair<pair<int,int> ,int>> q;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(isWater[i][j]==1)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }

        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;

            int dist=q.front().second;
            q.pop();
            ans[r][c]=dist;

        
            for(int i=0;i<4;i++)
            {
                int nr=r+dx[i];
                int nc=c+dy[i];


                if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc])
                {
                    vis[nr][nc]=1;
                    q.push({{nr,nc},dist+1});
                }
            }


        }

        return ans;
        
    }
};