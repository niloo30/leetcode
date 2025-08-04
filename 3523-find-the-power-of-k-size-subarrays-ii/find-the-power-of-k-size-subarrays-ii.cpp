class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {

        int n=nums.size();
        if(n==1 || k==1)
        return nums;
        vector<int> ans;
        deque<int> q;

        int i=0,j=0;

        while(j<n)
        {
            while(q.size() && nums[j]!=1+nums[q.back()])
            {
                q.pop_back();
            }
            q.push_back(j);
            if(j-i+1==k)
            {
                if(q.size()>=k)
                ans.push_back(nums[q.back()]);
                else
                ans.push_back(-1);

                // time to slide the window 
                if(i==q.front())
                {
                    q.pop_front();
                }
                i++;
            }
            j++;
        }

        return ans;
        
        
    }
};