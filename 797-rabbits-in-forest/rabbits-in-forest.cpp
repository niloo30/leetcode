class Solution {
public:
    int numRabbits(vector<int>& arr) {

        int n=arr.size();

        int ans=0;

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;

        for(auto ele:mp)
        {
            int f=ele.first;
            int s=ele.second;

            while(s>0)
            {
                ans+=(f+1);
                s-=(f+1);
            }
        }

        return ans;
        
    }
};