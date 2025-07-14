class Solution {
public:
    #define p pair<int,int> 
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        int n=nums.size();
        for(int ele:nums)
        mp[ele]++;

        vector<vector<int>> bucket(n+1);
        // will act like buckrt 
        // index as frequency 

        for(auto ele:mp)
        {
            int element=ele.first;
            int freq=ele.second;

            bucket[freq].push_back(element);
        }
        
        vector<int> ans; // answer store karayla

        for(int i=n;i>=0;i--)
        {
            if(bucket[i].size()==0)
            continue;

            while(bucket[i].size()>0 && k)
            {
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }

        return ans;

        
        
    }
};