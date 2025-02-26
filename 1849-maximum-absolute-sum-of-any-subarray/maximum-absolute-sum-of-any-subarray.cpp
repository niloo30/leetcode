class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int n=nums.size();

        //maximum subarray 
        //minimum subarray
        //ans= max of  abs values

        int curr=nums[0];
        int maxi=nums[0];

        for(int i=1;i<n;i++)
        {
            curr=max(curr+nums[i],nums[i]);
            maxi=max(maxi,curr);
        }

        int mini=nums[0];
        curr=nums[0];

        for(int i=1;i<n;i++)
        {
            curr=min(curr+nums[i],nums[i]);
            mini=min(mini,curr);
        }

        return max(maxi,abs(mini));
        
    }
};