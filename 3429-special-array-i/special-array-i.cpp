class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        int n=nums.size();

        for(int i=0;i<n-1;i++)
        {
            int curr=(nums[i]&1);
            int next=(nums[i+1]&1);

            if(curr^next==0)
            return false;
        }

        return true;
        
    }
};