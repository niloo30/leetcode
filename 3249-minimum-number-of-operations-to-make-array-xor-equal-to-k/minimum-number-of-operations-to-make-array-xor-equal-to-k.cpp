class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int n=nums.size();

        int ans=0;

        for(int i=0;i<=31;i++)
        {
            int ones=0;

            for(int j=0;j<n;j++)
            {
                int x=nums[j];

                if(x&(1<<i))
                ones++;

            }
            if(k & (1<<i))
            {
                if(ones%2==0)
                ans++;
            }
            else
            {
                if(ones%2)
                ans++;
            }
        }



        return ans;
        
    }
};