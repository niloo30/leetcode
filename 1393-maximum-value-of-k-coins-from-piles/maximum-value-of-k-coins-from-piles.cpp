class Solution {
public:
    int dp[2005][2005];
    int f(int i,vector<vector<int>>& arr,int k)
    {
        if(i==arr.size())
        return 0;
        if(dp[i][k]!=-1)
        return dp[i][k];

        int take=0,skip=0;
        skip=f(i+1,arr,k);
        int val=0;
        for(int j=0;j<min((int)arr[i].size(),k);j++)
        {
            val+= arr[i][j];
            take=max(take,val+f(i+1,arr,k-(j+1)));
        }


        return dp[i][k]=max(take,skip);
    }
    int maxValueOfCoins(vector<vector<int>>& arr, int k) {

        memset(dp,-1,sizeof(dp));
        return f(0,arr,k);
        
    }
};