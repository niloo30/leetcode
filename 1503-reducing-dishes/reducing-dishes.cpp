class Solution {
public:
    int dp[505][505];
    int f(int i,int t,vector<int>& arr)
    {
        if(i>=arr.size())
        return 0;

        if(dp[i][t]!=INT_MIN)
        return dp[i][t];
        
        int taken=t*arr[i]+f(i+1,t+1,arr);
        int skip=f(i+1,t,arr);

        return dp[i][t]= max(taken,skip);
    }
    int maxSatisfaction(vector<int>& arr) {
        
        sort(begin(arr),end(arr));
        for (int i = 0; i < 505; i++)
            for (int j = 0; j < 505; j++)
                dp[i][j] = INT_MIN;
        return f(0,1,arr);
    }
};