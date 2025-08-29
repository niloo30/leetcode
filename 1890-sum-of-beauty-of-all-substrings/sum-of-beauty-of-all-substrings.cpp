class Solution {
public:
    int beautySum(string s) {

        int  n=s.size();

        int ans=0;
        for(int i=0;i<n;i++)
        {
            vector<int> arr(26,0);
            

            for(int j=i;j<n;j++)
            {
                arr[s[j]-'a']++;
                // maxi=max(maxi,arr[s[j]-'a']);
                // mini=min(mini,arr[s[j]-'a']);
                int maxi=0;
                int mini=n+1;
                for(int k=0;k<26;k++){
                if(arr[k]>0)
                {
                    maxi=max(maxi,arr[k]);
                    mini=min(mini,arr[k]);
                }
                }
                ans+=(maxi-mini);
            }    
        }

        return ans;
        
    }
};