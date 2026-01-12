class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {

        unordered_set<int> st;
        vector<int> arr;

        int m=grid.size();
        int n=grid[0].size();


        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                st.insert(grid[i][j]%x);
                if(st.size()>1)
                return -1;

                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        int med=arr[arr.size()/2];

        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            ans+=(abs(arr[i]-med)/x);
        }

        return ans;
        
    }
};