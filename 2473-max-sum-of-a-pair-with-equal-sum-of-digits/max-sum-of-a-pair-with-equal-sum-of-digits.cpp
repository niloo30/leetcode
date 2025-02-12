class Solution {
public:
    long long sod(long long n)
    {
        long long sum=0;
        while(n)
        {
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {

        int n=nums.size();
        //priority_queue<pair<int,int>> pq;

        unordered_map<long long,vector<long long>> mp;

        for(int i=0;i<n;i++)
        {
            long long s=sod(nums[i]);
            mp[s].push_back(nums[i]);
        }

        long long maxi=-1;

        for(auto x:mp)
        {
            int val=x.first;
            vector<long long> v=mp[val];
            if(v.size()<2)
            continue;

            sort(v.begin(),v.end());
            long long temp=v[v.size()-1]+v[v.size()-2];

            maxi=max(maxi,temp);
        }

        return maxi;



        
    }
};