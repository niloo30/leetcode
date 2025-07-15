class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        // [-7,-8,7,5,7,1,6,0]
        //  k=4 
        // dry run this and u will know 
        // we must store the index not the element 
        int n=nums.size();

        deque<int> q;
        int i=0,j=0;
        vector<int> ans;

        while(j<n)
        {
            // jevha paryant acha candidate milel tevha paryant
            while(!q.empty() && nums[j]>=nums[q.back()])
            {
                q.pop_back();
            }
            q.push_back(j);

            if(j-i+1==k)
            {
                ans.push_back(nums[q.front()]);
                // window slide karavi lagel right??
                // check i wala is it the front of deque
                if(i==q.front())
                q.pop_front();
                i++;
            }
            j++;
        }
        return ans;
    }
};