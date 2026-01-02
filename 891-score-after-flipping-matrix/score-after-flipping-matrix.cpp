class Solution {
public:
    void fliprow(vector<vector<int>>& arr,int row)
    {
        //flipping the row

        for(int i=0;i<arr[0].size();i++)
        {
            arr[row][i]=1-arr[row][i];
        }
    }
    void flipcol(vector<vector<int>>& arr,int col)
    {
        for(int i=0;i<arr.size();i++)
        {
            arr[i][col]=1-arr[i][col];
        }

    }
    int matrixScore(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==0)
            fliprow(grid,i);
        }
        for(int c=0;c<m;c++)
        {
            int one=0,zero=0;
            for(int r=0;r<n;r++)
            {
                if(grid[r][c]==0)
                zero++;
                else
                one++;

            }
            if(zero>one)
            flipcol(grid,c);
        }


        int ans=0;

        for(int r=0;r<n;r++)
        {
            int temp=0;
            
            for(int i=0;i<m;i++)
            {
                int p=m-i-1;
                temp+=(grid[r][i]*(1<<p));
            }
            ans+=temp;
        }

        return ans;
        
    }
};