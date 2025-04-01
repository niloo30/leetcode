class Solution {
public:
    long long solve(vector<vector<int>>& arr,int i,int n,vector<long long>& dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        long long take=0;
        long long skip=0;
        take=arr[i][0]+solve(arr,i+arr[i][1]+1,n,dp);

        skip=solve(arr,i+1,n,dp);

        return dp[i]= max(take,skip);
    }
    long long mostPoints(vector<vector<int>>& questions) {

        int n=questions.size();
        vector<long long> dp(n+1,-1);
        return solve(questions,0,n,dp);
        
    }
};