class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        int n=nums.size();
        long long ans=0;
        int target=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i])continue;
            long long j=i;
            while(j<n &&nums[j]==0)j++;
            long long x=j-i;
            long long temp=(x*(x+1))/2;
            ans+=temp;
            i=j;
        }
        return ans;
        
    }
};