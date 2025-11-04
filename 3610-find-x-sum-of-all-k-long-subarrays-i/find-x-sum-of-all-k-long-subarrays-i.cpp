class Solution {
public:
    #define t pair<int,int> 
    int f(unordered_map<int,int>& mp,int x)
    {
        priority_queue<t,vector<t>,greater<t>> pq;

        for(auto ele:mp)
        {
            pq.push({ele.second,ele.first});

            if(pq.size()>x)
            pq.pop();
        }
        int sum=0;
        while(!pq.empty())
        {
            auto [freq,ele]=pq.top();
            pq.pop();
            sum+=freq*ele;
        }

        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {

        vector<int> ans;
        int i=0,j=0;

        int n=nums.size();

        unordered_map<int,int> mp;

        while(j<n)
        {
            mp[nums[j]]++;

            if(j-i+1==k)
            {
                int val=f(mp,x);
                ans.push_back(val);

                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);
                i++;
            }
            j++;
        }

        return ans;
        
    }
};