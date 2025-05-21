class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {

        unordered_set<int> row,col;
        int m=arr.size();
        int n=arr[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto ele:row)
        {
            for(int i=0;i<n;i++)
            {
                arr[ele][i]=0;
            }
        }

        for(auto ele:col)
        {
            for(int i=0;i<m;i++)
            {
                arr[i][ele]=0;
            }
        }  
        return ;    
    }
};