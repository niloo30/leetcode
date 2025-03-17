class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map<int,int> mp;

        for(auto ele:nums)
        mp[ele]++;

        for(auto x:mp){
            if(x.second %2)
            return false;
        }

        return true;
        
    }
};