class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        int n=mat.size();
        int m=mat[0].size();

        map<int,vector<int>> mp;
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto& ele:mp)
        {
            sort(ele.second.begin(),ele.second.end());
            reverse(ele.second.begin(),ele.second.end());
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int key=i-j;
                int val=mp[key].back();
                mp[i-j].pop_back();

                mat[i][j]=val;
            }
        }

        return mat;


        
    }
};