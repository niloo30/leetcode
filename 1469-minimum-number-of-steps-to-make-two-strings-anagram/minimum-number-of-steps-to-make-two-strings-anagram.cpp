class Solution {
public:
    int minSteps(string s, string t) {


        vector<int> arr(26,0);
        
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        int count=0;
        for(int i=0;i<26;i++)
        count+=abs(arr[i]);

        return count/2;


        
    }
};