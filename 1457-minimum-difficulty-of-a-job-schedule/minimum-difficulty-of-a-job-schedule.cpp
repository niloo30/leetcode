class Solution {
public:
    int dp[301][11];
    int rec(int i,int d,vector<int>& arr)
    {
        // pruning 
        if(arr.size()-i<d)
        return 1e9;
        //base case
        if(d==1)
        {
            int ele=*max_element(arr.begin()+i,arr.end());
            return ele;
        }
        //cache check 
        if(dp[i][d]!=-1)
        return dp[i][d];

        //check
        int ans=1e9;
        int maxi=0;

        for(int j=i;j<arr.size();j++)
        {
            maxi=max(maxi,arr[j]);
            ans=min(ans,maxi+rec(j+1,d-1,arr));

        }
        //save and return 
        return dp[i][d]=ans;
    }
    int minDifficulty(vector<int>& arr, int d) {
        
        int n=arr.size();
        if(n<d)
        return -1;
        memset(dp,-1,sizeof(dp));
        return rec(0,d,arr);
    }
};