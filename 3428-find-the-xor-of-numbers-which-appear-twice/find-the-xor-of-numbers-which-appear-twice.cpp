class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {

        vector<int> arr(51);
        for(int ele:nums)
        arr[ele]++;


        int ans=0;
        for(int i=0;i<=50;i++)
        {
            if(arr[i]>=2)
            {
                ans^=i;
            }
        }
        return ans;
        
    }
};