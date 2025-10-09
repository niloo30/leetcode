class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {

        int n=s.size();
        vector<pair<int,int>> arr;

        char curr=s[0];
        int count=1;

        int ones=0;
        if(curr=='1')
        ones++;

        for(int i=1;i<n;i++)
        {
            if(s[i]==curr)
            {
                count++;
            }
            else
            {
                arr.push_back({curr-'0',count});
                curr=s[i];
                count=1;
            }
            if(s[i]=='1')
            ones++;
        }
        arr.push_back({curr-'0',count});
        int ans=ones;
        for(int i=0;i<arr.size();i++)
        {
            if(i!=0 && i!=arr.size()-1)
            {
                if(arr[i].first==1)
                {
                    ans=max(ans,ones+arr[i-1].second+arr[i+1].second);
                }
            }

        }
        return ans;
    }
};