class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        // binary search try kru shakto 

        int i=1;
        while(1)
        {
            if(!(binary_search(nums.begin(),nums.end(),i)))
            return i;
            i++;
        }

        return 0;
        
    }
};