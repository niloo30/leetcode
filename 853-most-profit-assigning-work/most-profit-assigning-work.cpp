class Solution {
public:
    int upper(vector<int>& nums,int val)
    {
        auto it=upper_bound(nums.begin(),nums.end(),val)-nums.begin();
        return it;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {


        int ans=0;

        vector<vector<int>> arr;
        for(int i=0;i<profit.size();i++)
        {
            int f=difficulty[i];
            int s=profit[i];

            arr.push_back({f,s});
        }

        sort(arr.begin(),arr.end());

         for (int i = 1; i < arr.size(); i++) {
            arr[i][1] = max(arr[i][1], arr[i-1][1]);
        }


        vector<int> diff;
        for (auto &v : arr) diff.push_back(v[0]);

        for (int i = 0; i < worker.size(); i++) {
            int it = upper(diff, worker[i]);
            if (it == 0) continue;
            it--;
            ans += arr[it][1];
        }

        return ans;



        return ans;
        
    }
};