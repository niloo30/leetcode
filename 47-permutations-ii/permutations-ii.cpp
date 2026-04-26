class Solution {
public:
            void backtrack(vector<vector<int>>& ans,vector<int>& temp,vector<int>& nums,vector<bool>& used){
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
        }
        else {

            for(int i=0;i<nums.size();i++)
            {
                if(used[i] || (i>0 and nums[i]==nums[i-1] and !used[i-1])) continue;

                used[i]=true;
                temp.push_back(nums[i]);
                backtrack(ans,temp,nums,used);
                used[i]=false;
                temp.pop_back();
            }

        }
        
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {


        vector<vector<int>> ans;
        
        vector<int> temp;
        vector<bool> used(nums.size(),false);
        sort(nums.begin(),nums.end());

        backtrack(ans,temp,nums,used);

        return ans;
        
    }
};