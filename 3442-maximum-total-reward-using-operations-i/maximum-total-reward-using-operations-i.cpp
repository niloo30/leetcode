class Solution {
public:
    int dp[4005][2005];
    int f(vector<int>& arr,int i,int profit)
    {
        if(i>=arr.size())
        return profit;
        if(dp[profit][i]!=-1)
        return dp[profit][i];
        int take=0;
        int skip=0;
        if(profit<arr[i])
        take=f(arr,i+1,profit+arr[i]);
        skip=f(arr,i+1,profit);

        return dp[profit][i]=max(take,skip);
    }
    int maxTotalReward(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        memset(dp,-1,sizeof(dp));
        return f(arr,0,0);
        
    }
};