class Solution {
public:
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int n=img.size();
        int m=img[0].size();

        vector<vector<int>> ans(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int val=img[i][j];
                int den=1;

                for(int dir=0;dir<8;dir++)
                {
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];

                    if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                        val+=img[nx][ny];
                        den++;
                    }
                }

                ans[i][j]=(val/den);
            }
        }
        return ans;
    }
};