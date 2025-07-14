class Solution {
public:
    int minPairSum(vector<int>& nums) {

        int n=nums.size();
        int sum=0;
        int maxsum=0;
        int i=0,j=n-1;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            sum=nums[i]+nums[j];
            maxsum=max(sum,maxsum);
            i++;j--;
        }

        return maxsum;





        
    }
};