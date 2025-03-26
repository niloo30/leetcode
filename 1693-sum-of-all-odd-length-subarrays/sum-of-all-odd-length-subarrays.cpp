class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int n=arr.size();

        int ans=0;

        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-i;

            int contribution=((l*r+1)/2)*arr[i];
            ans+=contribution;
        }


        return ans;


        
    }
};