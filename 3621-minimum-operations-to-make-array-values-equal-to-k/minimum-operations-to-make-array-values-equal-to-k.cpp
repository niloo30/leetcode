class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int n=nums.size();

        int mini=*min_element(nums.begin(),nums.end());

        if(mini<k)
        return -1;

        unordered_set<int> st;
        for(int ele:nums)
        {
            st.insert(ele);
        }
        int ans=0;

        for(auto ele:st)
        {
            if(ele>k)
            ans++;
        }


        return ans;
        
    }
};