class Solution {
public:
    int ans=0;
    void f(vector<int>& nums,int i,int val,int n)
    {
        if(i==n)
        {
            ans+=val;
            return ;
        }
        val=val^nums[i];
        f(nums,i+1,val,n);
        val=val^nums[i];
        f(nums,i+1,val,n);
    }
    int subsetXORSum(vector<int>& nums) {
        

        int n=nums.size();

        f(nums,0,0,n);
        return ans;
        
    }
};