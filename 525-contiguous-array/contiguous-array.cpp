class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n=nums.size();
        map<int,int> mp;

        //1 ->+1 
        //0 ->-1
        int ans=0;
        int presum=0;

        mp[presum]=-1;
        //took nothing sum find out at -1 idx 

        
        for(int i=0;i<n;i++)
        {
            if(nums[i])
            presum++;
            else
            presum--;

            if(mp.find(presum)!=mp.end())
            {
                ans=max(ans,i-mp[presum]);
            }
            else
            {
                mp[presum]=i;
            }
        }
        return ans;
        
    }
};