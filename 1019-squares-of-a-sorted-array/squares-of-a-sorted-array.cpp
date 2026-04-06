class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        for(int &ele:nums)
        {
            ele*=ele;
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};