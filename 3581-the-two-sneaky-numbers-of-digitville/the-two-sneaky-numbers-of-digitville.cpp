class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        vector<int> arr(101,0);

        for(int ele:nums)
        arr[ele]++;


        vector<int> ans;

        for(int i=0;i<101;i++)
        if(arr[i]==2)
        ans.push_back(i);


        return ans;
        
    }
};