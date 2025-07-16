class Solution {
public:
    
    int f(int i ,vector<int>& nums,int k,unordered_map<int,int>& mp)
    {
        if(i==nums.size())
        return 1;

        int take = 0,skip =0;

        if(!mp[(nums[i]-k)] && !mp[(k+nums[i])])
        {
            mp[nums[i]]++;
            take=f(i+1,nums,k,mp);
            mp[nums[i]]--;
            if(mp[nums[i]]==0)
            mp.erase(nums[i]);
        }
        
        skip= f(i+1,nums,k,mp);

        return take+skip;
    }
    int beautifulSubsets(vector<int>& nums, int k) {


        // sort(begin(nums),end(nums));
        unordered_map<int,int> mp;
        return f(0,nums,k,mp)-1;
        
    }
};