class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //tc O(n)
        //sapce same as time
        //approach 1  use hashmap
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int ele:nums)
        mp[ele]++;

        for(auto &it :mp)
        {
            if(it.second>n/2)
            return it.first;
        }

        return -1;
        
    }
};