class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        int m=mat.size();
        int n=mat[0].size();

        vector<int> ans;

        int x=m+n-1;

        vector<int> arr[x];

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int key=i+j;
                int val=mat[i][j];

                arr[key].push_back(val);
            }
        }

        for(int i=0;i<x;i++)
        {
            vector<int> temp;
            for(int ele:arr[i])
            temp.push_back(ele);

            if(i%2==0)
            reverse(temp.begin(),temp.end());
            for(int ele:temp)
            ans.push_back(ele);
        }
        return ans;
        return {};
        
    }
};