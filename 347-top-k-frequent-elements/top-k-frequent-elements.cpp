class Solution {
public:
    #define p pair<int,int> 
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int,int> mp;

        for(int ele:nums)
        mp[ele]++;

        priority_queue<p,vector<p>,greater<p>> pq;

        for(auto x:mp)
        {
            pair<int,int> a={x.second,x.first};
            pq.push(a);
            if(pq.size()>k)
            pq.pop();
        }
        vector<int> ans;

        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;

        
        
    }
};