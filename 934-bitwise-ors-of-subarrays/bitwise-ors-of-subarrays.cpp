class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {

        int n=arr.size();
        unordered_set<int> ans,prev,curr;

        for(int i=0;i<n;i++)
        {
            for(auto x: prev)
            {
                curr.insert(x | arr[i]);
                ans.insert(x | arr[i]);
            }
            curr.insert(arr[i]);
            ans.insert(arr[i]);

            prev=curr;
            curr.clear();
        }
        return ans.size();
        
    }
};