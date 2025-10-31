class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int,int> mp;

        int ans=0;
        for(int ele:nums)
        mp[ele]++;

        for(auto ele:mp)
        {
            int freq=ele.second;
            ans+=((freq)*(freq-1)/2);
        }
        return ans;
        
    }
};