class Solution {
public:
    int f(int n)
    {
        int ans=0;
        while(n)
        {
            ans++;
            n=n & (n-1);
        }
        return ans;
    }
    vector<int> countBits(int n) {

        int i=0;
        vector<int> ans;
        while(i<=n)
        {
            ans.push_back(f(i));
            i++;
        }

        return ans;
        
    }
};