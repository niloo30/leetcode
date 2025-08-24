class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int len=INT_MIN;
        int zerocount=0;
        int i=0,j=0;
        for(int i=0;i<n;i++)
            if(nums[i]==0)
            zerocount++;
        if(zerocount==0)return n-1;

        zerocount=0;
        while(j<n)
        {
            if(nums[j]==0)zerocount++;
            if(zerocount==1)
            {
                 len=max(len,j-i);
            }
            while(zerocount>1)
            {
               
                if(nums[i]==0)
                zerocount--;
                i++;
            }
            j++;

        }
        return len;
        
    }
};