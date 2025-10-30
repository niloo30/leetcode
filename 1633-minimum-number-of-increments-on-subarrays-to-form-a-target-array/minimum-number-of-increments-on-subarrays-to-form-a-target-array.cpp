class Solution {
public:
    int minNumberOperations(vector<int>& target) {

        int ans=0;
        
        int n=target.size();
        int prev=0;

        for(int i=0;i<n;i++)
        {
            int curr=target[i]-0;

            if(abs(curr)>abs(prev))
            ans+=(abs(curr)-abs(prev));

            prev=curr;
        }

        return ans;
        
    }
};