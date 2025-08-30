class Solution {
public:
    #define ll long long
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<ll> pre(n+1,0);  // pre[0] = 0
        for(int i=1; i<=n; i++) pre[i] = pre[i-1] + nums[i-1];

        unordered_map<int,ll> mp; // value -> smallest prefix sum so far
        ll ans = LLONG_MIN;

        for(int i=0; i<n; i++){
            int val = nums[i];

            if(mp.count(val - k)){
                ans = max(ans, pre[i+1] - mp[val - k]);
            }
            if(mp.count(val + k)){
                ans = max(ans, pre[i+1] - mp[val + k]);
            }

            // update smallest prefix sum for this value
            if(!mp.count(val)) mp[val] = pre[i];
            else mp[val] = min(mp[val], pre[i]);
        }

        return ans == LLONG_MIN ? 0 : ans;
    }
};
