class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //tc O(nlogn)
        //space const
        //approach 3  use sorting

        sort(nums.begin(),nums.end());
        int n=nums.size();
        

        return nums[n/2];

        return -1;
        
    }
};