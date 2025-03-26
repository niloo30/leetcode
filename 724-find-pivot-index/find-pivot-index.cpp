class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n=nums.size();

        int totalsum=0;
        for(int ele:nums)
        totalsum+=ele;

        int currsum=0;
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
            if(totalsum-nums[i]==2*(currsum-nums[i]))
            {
                idx=i;
                break;
            }

        }

        return idx;
        
    }
};