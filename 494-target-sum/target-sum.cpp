class Solution {
public:
    int f(vector<int>& nums,int i,int sum,int target)
    {
        if(i==nums.size())
        return sum==target;

        int add=f(nums,i+1,sum+nums[i],target);
        int sub=f(nums,i+1,sum-nums[i],target);

        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {


        return f(nums,0,0,target);
        
    }
};