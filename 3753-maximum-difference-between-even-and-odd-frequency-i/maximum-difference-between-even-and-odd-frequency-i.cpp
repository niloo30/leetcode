class Solution {
public:
    int maxDifference(string s) {

        int n=s.size();
        vector<int> arr(26,0);

        for(int i=0;i<n;i++)
        arr[s[i]-'a']++;

        int even=1e9;
        for(int i=0;i<26;i++)
        if(arr[i]%2==0 && arr[i])
        even=min(even,arr[i]);

        int odd=0;
        for(int i=0;i<26;i++)
        if(arr[i]%2)
        odd=max(odd,arr[i]);

        return odd-even;
        
    }
};