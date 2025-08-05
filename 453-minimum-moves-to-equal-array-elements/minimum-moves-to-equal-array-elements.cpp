class Solution {
public:
    int minMoves(vector<int>& nums) {


        //increment n-1 ele by 1 --> decrement 1 ele by 1

        // since i can only decrement i should make all the values equal to  min ele
        
        
        int val=*min_element(begin(nums),end(nums));

        int ans=0;

        for(int ele:nums)
        {
            ans+=(ele-val);
        }
        return ans;
        
    }
};