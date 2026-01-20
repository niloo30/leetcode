class Solution {
public:
   
    int hIndex(vector<int>& arr) {

        
        int n=arr.size();

        int ans=0;
        vector<int> freq(n+1,0);

        for(int i=0;i<n;i++)
        {
            int val=min(n,arr[i]);
            freq[val]++;
        }
        for(int i=n-1;i>=0;i--)
        {
            freq[i]+=freq[i+1];
        }

        for(int i=0;i<=n;i++)
        if(freq[i]>=i)
        ans=i;
        return ans;
        
    }
};