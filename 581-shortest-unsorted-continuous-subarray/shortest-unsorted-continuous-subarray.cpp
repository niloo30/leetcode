class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        int n=nums.size();
        vector<int> arr=nums;
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;

        while(i<n && arr[i]==nums[i])
        i++;

        while(j>=0 && nums[j]==arr[j])
        j--;

        if(i==n)
        return 0;
        return j-i+1;
        
    }
};