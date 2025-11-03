class Solution {
public:
    int minCost(string s, vector<int>& arr) {

        int n=arr.size();

        int ans=0;
        int prev=0;

        for(int i=0;i<n;i++)
        {
            if(i-1>=0 and s[i]!=s[i-1])
            {
                prev=0;
            }

            int curr=arr[i];
            ans+=min(prev,curr);
            prev=max(prev,curr);
        }
        return ans;
        
    }
};