class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {

        int m=grid.size();
        int n=grid[0].size();
        vector<int> arr;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            arr.push_back(grid[i][j]);
        }

        sort(arr.begin(),arr.end());

        int size=arr.size();
        int val=arr[size/2];

        int ans=0;

        for(int i=0;i<size;i++)
        {
            int num=abs(val-arr[i]);
            if(num%x)return -1;

            int temp_ans=num/x;

            ans+=temp_ans;
        }



        return ans;


        
    }
};