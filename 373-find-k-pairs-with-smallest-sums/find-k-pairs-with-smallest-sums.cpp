class Solution {
public:

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>> pq;

        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int sum=nums1[i]+nums2[j];

                if(pq.size()<k)
                {
                    pq.push({sum,{i,j}});
                }
                else
                {
                    if(sum>=pq.top().first)
                    break;
                    else
                    {
                        pq.pop();
                        pq.push({sum,{i,j}});

                    }
                }
            }
        }

        while(!pq.empty())
        {
            int i=pq.top().second.first;
            int j=pq.top().second.second;

            ans.push_back({nums1[i],nums2[j]});
            pq.pop();
        }

        return ans;
        
    }
};