class Solution {
public:
    int mod=1e9+7;
    int lengthAfterTransformations(string s, int t) {

        vector<int> arr(26,0);
        for(char ch:s)
        arr[ch-'a']++;

        int ans=0;
        while(t--)
        {
            vector<int> temp(26);
            for(int i=0;i<=25;i++)
            {
                if(i==25)
                {
                    temp[0]=(temp[0]+arr[25])%mod;
                    temp[1]=(temp[1]+arr[25])%mod;
                    
                    continue;
                }
                temp[i+1]=arr[i];
                
            }
            arr=temp;
        }
        for(int i=0;i<26;i++)
        {
            ans=(ans+arr[i])%mod;
        }
        return ans;
    }
};