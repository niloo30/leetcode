class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int ans=0;  
        int presum=0;

        int n=gain.size();
        for(int i=0;i<n;i++){
            presum+=gain[i];

            ans=max(ans,presum);
        }

        return ans;
        
    }
};