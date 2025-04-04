class Solution {
public:
    
    vector<vector<int>> ans;
    void f(int i,int n,vector<int>& arr,vector<int>& v)
    {
       ans.push_back(v);

       for(int idx=i;idx<n;idx++)
       {
            v.push_back(arr[idx]);
            f(idx+1,n,arr,v);
            v.pop_back();
       }


    }
    vector<vector<int>> subsets(vector<int>& nums) {

        
        int n=nums.size();
        vector<int> v;
        f(0,n,nums,v);
        return ans;
        
    }
};