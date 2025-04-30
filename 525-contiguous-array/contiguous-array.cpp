class Solution {
public:
    int findMaxLength(vector<int>& nums) {


        // zr mi replace 0->-1 
        //ani then find longest subarray with sum 0
        // will it work


        int n=nums.size();
        int ans=0;

        map<int,int> mp;
        mp[0]=-1; // initially sarve khaali hai thik tr subarry 
        //with sum zero is 1 that is none subarray thik ahe now... idx -1 
        int presum=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            presum+=nums[i];
            else
            presum--;

            if(mp.find(presum)!=mp.end())
            {
                ans=max(ans,i-mp[presum]);
            }
            else
            mp.insert({presum,i});
        }

        return ans;
        
    }
};