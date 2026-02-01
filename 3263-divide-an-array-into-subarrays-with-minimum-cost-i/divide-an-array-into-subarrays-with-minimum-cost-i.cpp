class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=0;
        ans+=nums[0];

        int min1=1e9,min2=1e9;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=min1)
            {
                min2=min1;
                min1=nums[i];
            }
            else
            if(nums[i]<=min2)
            min2=nums[i];
        }
        ans+=min1;
        ans+=min2;
        return ans;
    }
};