class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {

        int n=nums1.size();
        int m=nums2.size();

        int ans=0;

        if(n%2==0 and m%2==0)
        return ans;

        if(n%2 and m%2==0)
        {
            for(int ele:nums2)
            ans^=ele;

            return ans;
        }
        if(n%2==0 and m%2)
        {
            for(int ele:nums1)
            ans^=ele;

            return ans;
        }

        for(int i=0;i<n;i++)
        ans^=nums1[i];

        for(int i=0;i<m;i++)
        ans^=nums2[i];


        return ans;

        
    }
};