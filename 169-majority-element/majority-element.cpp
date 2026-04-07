class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //tc O(n^2)
        //const space
        //approach 1 
        
        int n=nums.size();
        for(int ele:nums)
        {
            int count=0;
            for(int ele2:nums)
            {
                if(ele==ele2)
                count++;
            }
            if(count>n/2)
            return ele;
        }

        return -1;
        
    }
};