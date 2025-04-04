class Solution {
public:
    // set<vector<int>> st;
    vector<vector<int>> ans;
    void f(int i,int n,vector<int>& arr,vector<int>& v)
    {
        if(i==n)
        {
            ans.push_back(v);
            return ;
        }

        v.push_back(arr[i]);
        f(i+1,n,arr,v);
        v.pop_back();
        f(i+1,n,arr,v);


    }
    vector<vector<int>> subsets(vector<int>& nums) {

       // sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> v;
        f(0,n,nums,v);
       // vector<vector<int>> ans(st.begin(),st.end());

        return ans;
        
    }
};