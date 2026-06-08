class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> ans;

        for(int ele:nums)
        if(ele<pivot)
        ans.push_back(ele);

        for(int ele:nums)
        if(ele==pivot)
        ans.push_back(ele);

        for(int ele:nums)
        if(ele>pivot)
        ans.push_back(ele);


        return ans;
        
    }
};