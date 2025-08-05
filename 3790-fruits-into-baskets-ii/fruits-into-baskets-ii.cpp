class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int ans=0;
        int n=fruits.size();
        vector<int> vis(n,0); // not visited yet
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[j] && baskets[j]>=fruits[i])
                {
                    vis[j]=1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        if(!vis[i])
        ans++;
        return ans;
        
    }
};