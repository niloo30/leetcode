class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {

        int n=nums.size();
        int maxi=*max_element(begin(nums),end(nums));
        vector<int> arr(maxi+1,0);
        priority_queue<int> pq;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff=abs(nums[j]-nums[i]);
                arr[diff]++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            k-=arr[i];
            if(k<=0)
            return i;
        }

        return -1;
        
    }
};