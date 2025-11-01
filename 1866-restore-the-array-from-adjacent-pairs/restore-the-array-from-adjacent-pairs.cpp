class Solution {
public:
    void dfs(int val,map<int,vector<int>>& arr,unordered_set<int>& visited,vector<int>& ans)
    {
        ans.push_back(val);
        visited.insert(val);
        for(auto it:arr[val])
        {
            if(!visited.count(it))
            {
                
                dfs(it,arr,visited,ans);
            }
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {


        map<int,vector<int>> arr;
        int n=adjacentPairs.size();


        for(int i=0;i<n;i++)
        {
            int l=adjacentPairs[i][0];
            int r=adjacentPairs[i][1];

            arr[l].push_back(r);
            arr[r].push_back(l);
        }

        vector<int> ans;

        unordered_set<int> visited;

        for(auto& ele:arr)
        {
            if(ele.second.size()==1)
            {
                int firstelement=ele.first;

                dfs(firstelement,arr,visited,ans);
                break;
            }
        }

        return ans;
        
    }
};