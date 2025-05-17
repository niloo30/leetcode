class Solution {
public:
    void sortColors(vector<int>& nums) {

        // sort(nums.begin(),nums.end());
        // return ;

        int n=nums.size();
        int z=0;int o=0;int t=0;

        for(int i=0;i<n;i++)
        if(nums[i]==0)
        z++;
        else
        if(nums[i]==1)
        o++;
        else t++;

        int idx=0;
        for(int i=0;i<z;i++)
        {
            nums[idx]=0;
            idx++;
        }
        for(int i=0;i<o;i++)
        {
            nums[idx]=1;
            idx++;
        }

        for(int i=0;i<t;i++)
        {
            nums[idx]=2;
            idx++;
        }

        return ;
        
        
    }
};