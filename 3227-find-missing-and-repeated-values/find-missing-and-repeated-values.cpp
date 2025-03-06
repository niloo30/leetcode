class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n=grid.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            mp[grid[i][j]]++;
        }
        int rep;
        int miss;
        
        for(int i=1;i<=n*n;i++)
        {

            if(!mp.count(i))
            miss=i;
            else
            if(mp[i]==2)
            rep=i;
        }


        return {rep,miss};
    }
};