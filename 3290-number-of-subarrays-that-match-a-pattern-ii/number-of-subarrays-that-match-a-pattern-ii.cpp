class Solution {
public: 
    vector<int> z_function(string s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {

        int n=nums.size();
        string text="";

        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1])
            text+="1";
            else if(nums[i]==nums[i+1])
            text+="0";
            else
            text+="*";
        }
        string pat="";
        int m=pattern.size();

        for(int i=0;i<m;i++){
            if(pattern[i]==1){
                pat.push_back('1');
            }
            else if(pattern[i]==0)
            pat.push_back('0');
            else
            pat+="*";
        }

        string final=pat+"$"+text;

        vector<int> z=z_function(final);

        int ans=0;

        for(int & i:z){
            if(i==m)
            ans++;
        }

        return ans;
    }
};