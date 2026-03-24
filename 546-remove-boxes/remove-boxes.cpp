class Solution {
public:
    int dp[101][101][101];
    int rec(int l,int r,int k,vector<int>& arr)
    {
        if(l>r)
        return 0;

        if(dp[l][r][k]==-1)
        {
            int ans=(k+1)*(k+1)+rec(l+1,r,0,arr);

            for(int i=l+1;i<=r;i++)
            {
                if(arr[i]==arr[l])
                {
                    ans=max(ans,rec(l+1,i-1,0,arr)+rec(i,r,k+1,arr));
                }
            }


            dp[l][r][k]=ans;
        }
        return dp[l][r][k];

        
    }
    int removeBoxes(vector<int>& boxes) {

        int n=boxes.size();
        memset(dp,-1,sizeof(dp));
        return rec(0,n-1,0,boxes);
        
    }
};