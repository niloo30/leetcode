class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int ans=0;
        for(int ele:nums)
        {
            int r=ele%3;

            ans+=min(r,3-r);
        }

        return ans;
        
    }
};