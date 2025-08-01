class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        vector<int> presum=travel;
        for(int i=1;i<travel.size();i++)
        {
            presum[i]=presum[i-1]+travel[i];
        }

        // need to find the last indices of each garbage type
        int g=0,p=0,m=0;

        int ans=0;
        for(int i=0;i<garbage.size();i++)
        {
            string s=garbage[i];
            ans+=s.size();

            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='M')
                m=i;
                else
                if(s[j]=='P')
                p=i;
                else
                g=i;
            }
        }

        if(p-1>=0)
        ans+=presum[p-1];

        if(g-1>=0)
        ans+=presum[g-1];

        if(m-1>=0)
        ans+=presum[m-1];

        return ans;
        
    }
};