class Solution {
public:
    int upper(int val,vector<pair<int,int>>& arr)
    {
        int it=arr.size();

        int l=0;int h=arr.size()-1;

        while(l<=h)
        {
            int mid=(l+(h-l)/2);

            if(arr[mid].first>val)
            {
                it=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }

        return it;
    }
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {

        int n=nums1.size();
        vector<pair<int,int>> arr;
        vector<int> ans(n,-1);
        for(int i=0;i<nums1.size();i++)
        {
            arr.push_back({nums1[i],i});
        }
        sort(arr.begin(),arr.end());// sorted on te basis of 1st value

        // vector<int> temp1=nums1;

        vector<int> used(n,0); //not used anything yet
        for(int i=0;i<n;i++)
        {
            int val=nums2[i];

            auto it=upper(val,arr);
            while(it<n && used[it])
            it++;

            if(it<n)
            {
                ans[i]=arr[it].first;
                used[it]=1;
            }
            
        }

        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] == -1) {
                while (idx < n && used[idx]) idx++;
                ans[i] = arr[idx].first;
                used[idx] = 1;
            }
        }
        return ans;


        
    }
};