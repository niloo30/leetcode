class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;
       // deque<int> q;
        multiset<int> st;
        int n=nums.size();

        int i=0,j=0;

        while(j<n){
            st.insert(nums[j]);

            if(j-i+1==k)
            {
                int val=*st.rbegin();
                ans.push_back(val);

                //slide the window
                auto it = st.find(nums[i]);
                if (it != st.end()) {
                    st.erase(it);  
                }
                i++;
            }
            j++;
        }
        return ans;
        
    }
};