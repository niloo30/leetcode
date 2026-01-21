class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;
       // deque<int> q;
        map<int,int> st;
        int n=nums.size();

        int i=0,j=0;

        while(j<n){
            st[nums[j]]++;

            if(j-i+1==k)
            {
                int val=st.rbegin()->first;
                ans.push_back(val);

                //slide the window
                st[nums[i]]--;
                if(st[nums[i]]==0)
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return ans;
        
    }
};