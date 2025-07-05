class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        int n=nums1.size();
        int m=nums2.size();

        for(int i=0;i<n;i++)
        {
            int val=nums1[i];
            if(binary_search(nums2.begin(),nums2.end(),val))
            return val;
        }
        return -1;
    }
};