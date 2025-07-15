class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        map<int,int> mp;// map-> presum,freq

        mp[0]=1; // mhanje ki 0 sum cha 1 subarray initiall ahe na
        int presum=0;
        for(int ele:nums)
        {
            presum+=ele;
            if(mp.contains(presum-k))
            ans+=mp[presum-k];

            mp[presum]++;
        }
        return ans;
        
    }
};