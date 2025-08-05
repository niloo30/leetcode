class Solution {
public:
    int minMoves2(vector<int>& nums) {

        int n=nums.size();
        sort(begin(nums),end(nums));
        int val=nums[n/2];
        int ans=0;
        for(auto ele:nums)
        {
            ans+=abs(ele-val);
        }
        return ans;
        
    }
};