class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        vector<int> arr(101);
        for(int ele:nums)
        arr[ele]++;

        int maxfreq=*max_element(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<=100;i++)
        if(arr[i]==maxfreq)
        ans+=arr[i];


        return ans;
        
    }
};