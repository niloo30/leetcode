class Solution {
public:
    void backtrack(vector<vector<int>>& ans,vector<int>& temp,vector<int>& nums,int start){

        ans.push_back(temp);
        for(int i=start;i<nums.size();i++)
        {
            if(i>start and nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            backtrack(ans,temp,nums,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        
        vector<int> temp;
        sort(nums.begin(),nums.end());
        backtrack(ans,temp,nums,0);

        return ans;
        
    }
};