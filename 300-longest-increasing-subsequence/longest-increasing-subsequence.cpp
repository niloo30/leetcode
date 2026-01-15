class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {

        vector<int> ans;
    ans.push_back(arr[0]);


    int n=arr.size();

    for(int i=1;i<n;i++) {
        if(arr[i]>ans.back()) {
            ans.push_back(arr[i]);
        }
        else {
            int idx = lower_bound(ans.begin(), ans.end(), arr[i]) - ans.begin();

            if(idx<ans.size())
            ans[idx] = arr[i];
        }
    }

    cout<<ans.size()<<endl;
    return ans.size();
        
    }
};