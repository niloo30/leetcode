class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {

        int presum=0;
        int ans=0;
        for(int ele:nums)
        {
            presum+=ele;
            if(presum==0)
            ans++;
        }
        return ans;
        
    }
};