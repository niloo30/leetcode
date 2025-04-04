class Solution {
public:
    vector<vector<int>> ans;
    void f(int i,int n,vector<int>& arr,vector<int>& v)
    {
       ans.push_back(v);

       for(int idx=i;idx<n;idx++)
       {
            if(idx!=i and arr[idx]==arr[idx-1])continue;
            v.push_back(arr[idx]);
            f(idx+1,n,arr,v);
            v.pop_back();
       }


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        

        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> v;
        f(0,n,nums,v);
        

        return ans;
        
    }
};