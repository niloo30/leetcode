class Solution {
public:
    int f1(vector<int>& nums)
    {
        int l=0;
        int h=nums.size()-1;
        int val=-1;
        while(l<=h)
        {
            int mid=(l+h)/2;

            if(nums[mid]>0)
            {
                val=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        return val;
    }

    int f2(vector<int>& nums)
    {
        int l=0;
        int h=nums.size()-1;
        int val=-1;
        while(l<=h)
        {
            int mid=(l+h)/2;

            if(nums[mid]<0)
            {
                val=mid;
                l=mid+1;
            }
            else
            h=mid-1;
        }
        return val;
    }
    int maximumCount(vector<int>& nums) {

        int n=nums.size();

        int pos=f1(nums);
        int neg=f2(nums);

        if(pos==-1 && neg==-1)
        return 0;
        if(pos==-1)
        return neg+1;
        if(neg==-1)
        return n-pos;
        return max(neg+1,n-pos);
        
    }
};