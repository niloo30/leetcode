class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            pair<int,int> p;
            p.first=nums[i];
            p.second=i;

            pq.push(p);
            if(pq.size()>k)
            pq.pop();
        }
        vector<int> idx;
        vector<int> ans;
        while(pq.size())
        {
            idx.push_back(pq.top().second);
            pq.pop();
        }
        sort(idx.begin(),idx.end());
        for(int i=0;i<idx.size();i++)
        ans.push_back(nums[idx[i]]);

        return ans;
    }
};