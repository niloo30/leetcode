class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n=nums.size();

        map<int,int> mp;
        mp[0]=-1;

        // map -> presum,idx
        int presum=0;
        for(int i=0;i<n;i++)
        {
            presum+=nums[i];
            int rem=presum%k;

            if(mp.find(rem)!=mp.end())
            {
                if(i-mp[rem]>=2)
                return true;
            }
            if(mp.find(rem)==mp.end())
            mp[rem]=i;

        }
        return false;
        
    }
};