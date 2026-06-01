class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        sort(cost.begin(),cost.end());

        int ans=0;
        int n=cost.size();
        for(int i=n-1;i>=0;i--)
        {
            ans+=cost[i];
            if(i-1>=0)
            ans+=cost[i-1];

            i--;
            i--;

        }

        return ans;
    }
};