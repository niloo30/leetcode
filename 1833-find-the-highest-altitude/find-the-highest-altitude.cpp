class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int ans=0;

        int presum=0;
        for(int ele:gain)
        {
            presum+=ele;
            ans=max(ans,presum);
        }
        return ans;
        
    }
};