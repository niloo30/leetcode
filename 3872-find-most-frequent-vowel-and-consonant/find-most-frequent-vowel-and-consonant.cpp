class Solution {
public:
    bool isvowel(char ch)
    {
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    int maxFreqSum(string s) {
        
        vector<int> arr(26,0);
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        int max1=0;
        int max2=0;
        for(int i=0;i<26;i++)
        {
            if(isvowel(i+'a'))
            max1=max(max1,arr[i]);
            else
            max2=max(max2,arr[i]);
        }
        return max1+max2;
    }
};