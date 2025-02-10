class Solution {
public:
    int check(int mid,vector<int>& nums)
    {
       // if(mid==0)return 1;
        if(nums[mid]<nums[0])
        return 1;
        return 0;
    }
    int findMin(vector<int>& nums) {

        int l=0;
        int h=nums.size()-1;
        int ans=0;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(mid,nums)==1)
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;

        }
        return nums[ans];
        
    }
};