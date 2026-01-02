class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        unordered_set<int> st;
        for(int ele:nums)
        {
            if(st.contains(ele))
            return ele;

            st.insert(ele);
        }
        return 0;
        
    }
};