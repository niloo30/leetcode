class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int l=0;
        int n=nums.size();
        int r=nums.size()-1;

        while(l+1<n and nums[l]<nums[l+1])
        l++;
        if(l==0)
        return false;
        while(r-1>=0 and nums[r]>nums[r-1])
        r--;
        if(r==n-1)
        return false;

        if(l>=r)
        return false;

        for(int i=l;i<r;i++)
        {
            if(nums[i] <= nums[i+1])
                return false;
        }


        return true;
        
    }
};