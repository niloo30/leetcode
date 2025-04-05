class Solution {
public:
    vector<vector<string>> ans;
    bool canplace (vector<string>& arr,int r,int c,int n)
    {
        for(int i=r-1, j=c;i>=0;i--)
        {
            if(arr[i][j]=='Q')
            return false;
        }

        for(int i=r-1,j=c-1;i>=0 and j>=0;i--,j--)
        {
            if(arr[i][j]=='Q')
            return false;
        }

        for(int i=r-1,j=c+1;i>=0 and j<n;i--,j++)
        {
            if(arr[i][j]=='Q')
            return false;
        }






        return true;
    }
    void f(vector<string>& arr,int r,int n)
    {
        if(r==n)
        {
            ans.push_back(arr);
            return ;
        }
        for(int i=0;i<n;i++)
        {
            if(canplace(arr,r,i,n))
            {
                arr[r][i]='Q';
                f(arr,r+1,n);
                arr[r][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {


        vector<string> arr(n,string(n,'.'));

        f(arr,0,n);

        return ans;
        
    }
};